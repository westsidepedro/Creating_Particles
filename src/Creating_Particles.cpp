//============================================================================
// Name        : Creating_Particles.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"

using namespace cave;

int main(int argc, char *argv[]) {

    srand(time(NULL)); //used to make rand() truely random

    Screen screen;

    //initalize everything, if something is wrong cout error
    if (screen.init() == false) {
	cout << "Error initialising SDL!" << endl;
    }

    Swarm swarm1; //declare a Swarm (an organizined but of particles remember)

    //game loop	-update particles, draw particles, check for messages/events
    while (true) {

	//calc colors to use
	int elapsed = SDL_GetTicks();
	unsigned char green = (unsigned char) ((1 + sin(elapsed * .001)) * 128);
	unsigned char red = (unsigned char) ((1 + sin(elapsed * .002)) * 128);
	unsigned char blue = (unsigned char) ((1 + sin(elapsed * .003)) * 128);
	//calc colors to use

	const Particle * const pParticles = swarm1.getParticles(); //a pointer to the things we want to draw

	//loop through all the particles
	for (int i = 0; i < Swarm::NPARTICLES; i++) {
	    Particle particle = pParticles[i];

	    int x = (particle.m_x + 1) * (Screen::SCREEN_WIDTH / 2); //calc the pos of the particles x
	    int y = (particle.m_y + 1) * (Screen::SCREEN_HEIGHT / 2); //calc the pos of the particles y

	    screen.setPixel(x, y, red, green, blue, 255); //set pixel to color
	}
	//Loop through all the particles

	//draw onto screen
	screen.update();
	//draw onto screen

	if (screen.processEvents() == false) {
	    break; //break out of loop!
	}
    }
    screen.close();

    return 0;
}

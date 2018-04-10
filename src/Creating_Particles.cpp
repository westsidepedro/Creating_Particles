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

    Swarm swarm1;

    //game loop	-update particles, draw particles, check for messages/events
    while (true) {

	//calc colors
	int elapsed = SDL_GetTicks();
	unsigned char green = (unsigned char) ((1 + sin(elapsed * .001)) * 128);
	unsigned char red = (unsigned char) ((1 + sin(elapsed * .002)) * 128);
	unsigned char blue = (unsigned char) ((1 + sin(elapsed * .003)) * 128);

	const Particle * const pParticles = swarm1.getParticles();

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
	    Particle particle = pParticles[i];

	    int x = (particle.m_x + 1) * (Screen::SCREEN_WIDTH / 2); //calc the pos of the particles x
	    int y = (particle.m_y + 1) * (Screen::SCREEN_HEIGHT / 2); //calc the pos of the particles y

	    screen.setPixel(x, y, red, green, blue, 255);
	}

	//draw onto screen
	screen.update();

	if (screen.processEvents() == false) {
	    break; //break out of loop!
	}
    }
    screen.close();

    return 0;
}

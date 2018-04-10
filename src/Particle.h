/*
 * Particle.h
 *
 *  Created on: Apr 10, 2018
 *      Author: jpetterson
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_
#include <stdlib.h>	/* need for use of 'rand()' - returns random# between 0 and RAND_MAX
			 * rand() is an int, and RAND_MAX is an int
			 * srand() seeds rand() with a number that makes rand() spit out different numbers
			 * every time. otherwise rand() uses the same 'random' numbers over and over
			 * */
#include <time.h>	// needed for time(NULL) in srand()

namespace cave
    {
    struct Particle
	{ // struct makes the following public by default unlike class, otherwise same as a class
	    double m_x; //position of particle, double b/c of decimals
	    double m_y; //position of particle, double b/c of decimals
	public:
	    Particle(); //consturctor
	    ~Particle(); //destructor
	};

    } /* namespace cave */

#endif /* PARTICLE_H_ */

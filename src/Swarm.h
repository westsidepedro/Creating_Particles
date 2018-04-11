/*
 * Swarm.h
 *
 *  Created on: Apr 10, 2018
 *      Author: jpetterson
 */

// 	SWARM IS USED TO ORGANIZE THE PARTICLES!!!!
#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h" // " " b/c it's local so we can call our created particle

namespace cave
    {
    class Swarm
	{
	private:
	    Particle * m_pParticles; /* m_ =instance var   _p =pointer
	     * 'Particle' is used just like an int, string, char....it's just the "type" 'm_pParticles is!
	     * from the Particle class (which has value x and y*/

	public:
	    Swarm(); //constructor
	    ~Swarm(); //destructor
	    const static int NPARTICLES = 5000; //number of particles we want to make
	    const Particle * const getParticles() { //const pointer to a Particle that is const
		return m_pParticles;
	    }
	    ;

	};

    } /* namespace cave */

#endif /* SWARM_H_ */

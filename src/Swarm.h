/*
 * Swarm.h
 *
 *  Created on: Apr 10, 2018
 *      Author: jpetterson
 */

// 	SWARM IS USED TO ORGANIZE THE PARTICLES!!!!
#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h" // " " b/c it's local

namespace cave
    {
    class Swarm
	{
	public:
	    const static int NPARTICLES = 5000; //number of particles we want to make

	private:
	    Particle * m_pParticles; //m_ =instance var   _p =pointer

	public:
	    Swarm(); //constructor
	    ~Swarm(); //destructor
	    const Particle * const getParticles() {
		return m_pParticles;
	    }
	    ;
	};

    } /* namespace cave */

#endif /* SWARM_H_ */

/*
 * Swarm.cpp
 *
 *  Created on: Apr 10, 2018
 *      Author: jpetterson
 */

#include "Swarm.h"

namespace cave
    {

    Swarm::Swarm() {
	m_pParticles = new Particle[NPARTICLES]; //make an array from class Particle that holds location data for NPARTICLES
	// allocate memory and fill it with partical objects
    }

    Swarm::~Swarm() {
	delete[] m_pParticles; // b/c new in the intit, must delete down here!
    }

    } /* namespace cave */

/*
 * Particle.cpp
 *
 *  Created on: Apr 10, 2018
 *      Author: jpetterson
 */

#include "Particle.h"

namespace cave
    {
    //create a particles location in x,y cordinate
    Particle::Particle() {
	m_x = ((2.0 * rand()) / RAND_MAX) - 1; //if multi by or cast to double, returns # between 0 and 1 // @suppress("Symbol is not resolved") // @suppress("Invalid arguments")
	m_y = ((2.0 * rand()) / RAND_MAX) - 1; // x2 changes range from (0 - +1) to (0 - +2) // @suppress("Invalid arguments") // @suppress("Symbol is not resolved")
    }				  // -1 changes range from (0 - +2) to (-1 - +1)

    Particle::~Particle() {
	// TODO Auto-generated destructor stub
    }

    } /* namespace cave */

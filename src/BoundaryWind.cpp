/*
 * BoundaryWind.cpp
 *
 *  Created on: 22 Dec 2023
 *      Author: ntc132
 */

#include "BoundaryWind.h"
#include "Equations.h"
#include "EquationsEuler.h"
#include "Grid.h"

void BoundaryWind::setBoundaries(){
	double p, rho, u;

	for(int i = 0; i < grid.nx + 2*grid.nGhost; i++){
		if(i < grid.minXIndex){
			rho = 0.1;
			p   = 0.1;
			u   = 10.;

			grid.quantities[i][EquationsEuler::DENS]   = rho;
			grid.quantities[i][EquationsEuler::XMOM]   = rho * u;
			grid.quantities[i][EquationsEuler::ENERGY] = (static_cast<EquationsEuler*>(&equations))->totalEnergy(p, rho * u * u);
		}
		else if(i > grid.maxXIndex)
			grid.quantities[i] = grid.quantities[grid.maxXIndex];
	}
}

BoundaryWind::~BoundaryWind() {
	// TODO Auto-generated destructor stub
}


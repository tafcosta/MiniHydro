/*
 * Grid.cpp
 *
 *  Created on: 19 Dec 2023
 *      Author: ntc132
 */

#include "Grid.h"
#include "Equations.h"

Grid::Grid(double xmin, double xmax, int nGhost, int nx, Equations& equations) : xmin(xmin), xmax(xmax), nGhost(nGhost), nx(nx), equations(equations) {

	this->quantities = std::vector<std::vector<double> > (nx + 2*nGhost, std::vector<double>(Equations::nCons, 0.0));
	this->fluxes = std::vector<std::vector<double> > (nx + 2*nGhost + 1, std::vector<double>(Equations::nCons, 0.0));

	dx = (xmax - xmin)/nx;
	xMidpoint = (xmax + xmin)/2;
	minXIndex = nGhost;
	maxXIndex = nGhost + nx - 1;
}

Grid::~Grid() {
	// TODO Auto-generated destructor stub
}


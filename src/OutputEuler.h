/*
 * OutputEuler.h
 *
 *  Created on: 23 Dec 2023
 *      Author: ntc132
 */

#ifndef SRC_OUTPUTEULER_H_
#define SRC_OUTPUTEULER_H_

#include "Equations.h"
#include "Grid.h"
#include "Output.h"

class OutputEuler: public Output {
public:
	OutputEuler(Grid& grid, Equations& equations) : Output(grid, equations) {};
	virtual ~OutputEuler();

	void makeOutput(const std::string& filename) override;

};

#endif /* SRC_OUTPUTEULER_H_ */

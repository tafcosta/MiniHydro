/*
 * Equations.h
 *
 *  Created on: 21 Dec 2023
 *      Author: ntc132
 */

#include <vector>

#ifndef SRC_EQUATIONS_H_
#define SRC_EQUATIONS_H_

class Equations {
public:
	Equations();
	virtual ~Equations();

	static const int nCons  = 3;

	virtual double getMaxAbsEigenvalue(std::vector<double>& quantities){return 0.;};
	virtual double* getFlux(std::vector<double>& quantities){return 0;};
};

#endif /* SRC_EQUATIONS_H_ */

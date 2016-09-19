/*
 * DynamicProgramming.h
 *
 *  Created on: Sep 18, 2016
 *      Author: lei
 */

#ifndef DYNAMICPROGRAMMING_H_
#define DYNAMICPROGRAMMING_H_

class DynamicProgramming {
public:
	DynamicProgramming();
	virtual ~DynamicProgramming();
	// Problem 1. Best Time to Buy and Sell Stock
	double maxProfit(std::vector<double> &prices);
};

#endif /* DYNAMICPROGRAMMING_H_ */

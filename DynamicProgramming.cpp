/*
 * DynamicProgramming.cpp

 *
 *  Created on: Sep 18, 2016
 *      Author: lei
 */

#include <iostream>
#include <vector>
#include "DynamicProgramming.h"


DynamicProgramming::DynamicProgramming() {
	// TODO Auto-generated constructor stub

}

DynamicProgramming::~DynamicProgramming() {
	// TODO Auto-generated destructor stub
}
double DynamicProgramming::maxProfit(std::vector<double> &prices){
	double profit;
	double minP = prices[0];
	profit = prices[1] - minP;
	for (uint i = 2; i < prices.size(); i++) {
		// update of minP
		if (prices[i] < minP) {
			minP = prices[i];
		}

		// update the profit.
		if (prices[i] - minP > profit) {
			profit = prices[i] - minP;
		}
	}

	return profit;
}


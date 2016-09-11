/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: leili
 *
 * Created on August 7, 2016, 12:53 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "SmartPtr.h"
#include "Array.h"

using namespace std;

/*
 * 
 */
class Array;


int main(int argc, char** argv) {
    std::cout << "Begin of LeetCode" << std::endl;
    
    // 1. Two Sum.
    SmartPtr<Array> arrayPtr(new Array);
    std::vector<int> dataIn = {6, 3, 9, 0, 5, 12};
    int targetVal = 12;
    std::vector<int> result = arrayPtr->twoSum(dataIn, targetVal);
    if (result.size() > 0){
        std::cout << "************** Problem 1 begin **************" << std::endl;
        std::cout << "Output of TwoSum is: ";
        for (uint i = 0; i < result.size(); i++){
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "************** Problem 1 end ****************" << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "************** Problem 2 (remove element) begin **************" << std::endl;
    std::vector<int> num = {1, 2, 2, 2, 3, 2, 4};
    int valRemoved = 3;
    std::cout << "The input Vector is:";
    for (uint i = 0; i < num.size(); i++){
    	std::cout << " " << num[i];
    }
    std::cout << std::endl;
    std::cout << "The values to be removed is " << valRemoved << std::endl;
    int lenOut = arrayPtr->removeElement(num, valRemoved);
    std::cout << "Length of final sequence is: " << lenOut << std::endl;
    std::cout << "************** Problem 2 end ****************" << std::endl;
    return 0;
}


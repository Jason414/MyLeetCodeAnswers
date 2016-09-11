/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.cc
 * Author: leili
 * 
 * Created on August 7, 2016, 12:55 AM
 */
#include <iostream>
#include <vector>
#include <functional>
#include <unordered_map>
#include <string>
#include <algorithm>
#include "Array.h"

Array::Array() {
}

Array::Array(const Array& orig) {
}

Array::~Array() {
}

std::vector<int> Array::twoSum(std::vector<int> dataIn, int target){
    std::vector<int> result;
    std::unordered_map<int, int> myMap;
        // assume there is no repeated values in "dataIn". 
    for (uint i = 0; i < dataIn.size(); i++){
        myMap[dataIn[i]] = i;
    }
    // 1. dataIn[i] is the index of unordered_map which is unique for each entry. 
    // 2. i is considered as the value for each entry which can be searched by index. 
    // 3. unordered_map.find(index) return an iterator of unordered_map which pointing to
    // the entry if index of that entry is identical with the argument "index". If no such 
    // item, the unordered_map.find(index) will return the iterator pointing to the end
    // of the unordered_map, i.e., unordered_map.end().
    for (uint j = 0; j < myMap.size(); j++){
        int anotherNumber = target - dataIn[j];
        if (myMap.find(anotherNumber) != myMap.end() && myMap.find(anotherNumber)->second != (int)j){
            std::unordered_map<int, int>::const_iterator it = myMap.find(anotherNumber);
            result.push_back(it->second);
        }
    }
    // sort the vector content in the ascending order. The argument should identify the beginning
    // and the end of the vector. 
    std::sort(result.begin(), result.end());
    return result;
}

int Array::removeElement(std::vector<int>& nums, int val){
	int len = 0;
	int i = 0;
	for (uint k = 0; k < nums.size(); k++){
		if (nums[k] != val){
			nums[i] = nums[k];
			i++;
		}
		else{
		}
	}
	len = i;
	return len;
}

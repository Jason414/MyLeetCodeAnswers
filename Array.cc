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

int Array::removeRepeat(std::vector <int> &nums){
	int i = 0;
	for (uint k = 0; k < nums.size(); k++){
		if (nums[i] != nums[k]){
			nums[i] = nums[k];
			i++;
		}
	}
	return i;
}

int Array::removeRepeatAllowTwice(std::vector <int> &nums){
	uint i = 0;
	int counter = 0;
	std::cout << "the new vector is: ";
	for (uint k = 1; k < nums.size() - 1; k++){
		if (nums[i] != nums[k] || (nums[i] == nums[k] && counter < 1)){
			if (nums[i] == nums[k]) {
				counter ++;
			}
			else{
				counter = 0;
			}
			i++;
			nums[i] = nums[k];
			std::cout << " " << nums[i];
		}
	}
	std::cout << std::endl;
	return i + 1;
}

void Array::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
//	int idx = m + n;    // index of the last element in first vector.
	int idx1 = m - 1;
	int idx2 = n - 1;
	for (int idx = m + n - 1; idx >= 0; idx --){
		if (nums1[idx1] > nums2[idx2]){
			nums1[idx] = nums1[idx1];
			idx1 --;
		}
		else{
			nums1[idx] = nums2[idx2];
			idx2 --;
		}
		if ((idx1 == -1 && idx2 != -1)|| (idx2 == -1 && idx1 != -1)) {
			break;
		}
	}
	if (idx1 == -1 && idx1 != -1){ // put all the remaining nums2 into the final vector.
		for (int k = idx2; k >= 0; k--){
			nums1[k] = nums2[k];
		}
	}
}

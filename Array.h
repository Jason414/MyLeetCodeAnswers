/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: leili
 *
 * Created on August 7, 2016, 12:55 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

class Array {
public:
    Array();
    Array(const Array& orig);
    virtual ~Array();
    
    std::vector<int> twoSum (std::vector<int> dataIn, int target);

    int removeElement(std::vector<int>& nums, int val);
private:
};

#endif /* ARRAY_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SmartPtr.h
 * Author: leili
 *
 * Created on August 8, 2016, 4:22 AM
 */

#ifndef SMARTPTR_H
#define SMARTPTR_H

template <class T>
class SmartPtr {
public:
    explicit SmartPtr(T *p = nullptr) { ptr = p;}
    virtual ~SmartPtr() {delete ptr;}
    
    T & operator * (){ return *ptr; }

    T * operator -> () { return ptr; }
private:
public: 
    T* ptr;
};

#endif /* SMARTPTR_H */


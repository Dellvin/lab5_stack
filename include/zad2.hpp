// Copyright 2018 Your Name <your_email>
//
// Created by Daniil on 02.02.2020.
//

#ifndef INCLUDE_ZAD2_HPP_
#define INCLUDE_ZAD2_HPP_

#include <iostream>

#define STACK_SIZE 20




template <typename T>
class stack
{
public:
    template <typename ... Args>
    void push_emplace(Args&&... value){
        T obj(value...);
        container[currentSize] = obj;
        currentSize--;
    }
    void push(T&& value){
        container[currentSize] = value;
        currentSize--;
    }
    const T& head() const{
        return container[currentSize+1];
    }
    T pop(){
        currentSize++;
        return container[currentSize];
    }
public:
    T container[STACK_SIZE];
    int64_t currentSize = STACK_SIZE-1;
};

#endif  // INCLUDE_ZAD2_HPP_

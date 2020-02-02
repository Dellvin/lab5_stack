// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_ZAD1_HPP_
#define INCLUDE_ZAD1_HPP_

#include <iostream>
#define STACK_SIZE 20

template <typename T>
class stack
{
public:
    void push(T&& value){
        container[currentSize] = value;
        currentSize--;
    }
    void push(const T& value){
        //if(!currentSize)
        container[currentSize] = value;
        currentSize--;
    }
    T pop(){
        currentSize++;
        return container[currentSize];
    }
    const T& head() const{
        return container[currentSize+1];
    }

public:
    T container[STACK_SIZE];
    int64_t currentSize = STACK_SIZE-1;
};
//http://cppstudio.com/post/5155/
//info about stack


#endif // INCLUDE_ZAD1_HPP_

// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <iostream>
#define STACK_SIZE 20

template <typename T>
class stack
{
public:
    void push(T&& value){
        container[currentSize]=value;
        currentSize--;
    }
    void push(const T& value){
        //if(!currentSize)
        int s=currentSize;
        container[currentSize]=value;
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
    unsigned long long currentSize=STACK_SIZE-1;
};
//http://cppstudio.com/post/5155/
//info about stack


#endif // INCLUDE_HEADER_HPP_

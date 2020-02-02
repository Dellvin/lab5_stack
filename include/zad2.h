//
// Created by Daniil on 02.02.2020.
//

#ifndef LAB_05_STACK_ZAD2_H
#define LAB_05_STACK_ZAD2_H

#include <iostream>

#define STACK_SIZE 20




template <typename T>
class stack
{
public:
    template <typename ... Args>
    void push_emplace(Args&&... value){
        T obj(value...);
        container[currentSize]=obj;
        currentSize--;
    }
    void push(T&& value){
        container[currentSize]=value;
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
    unsigned long long currentSize=STACK_SIZE-1;
};

#endif //LAB_05_STACK_ZAD2_H

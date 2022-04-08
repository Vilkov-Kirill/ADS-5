// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

#include <string>

template<typename type>
class TStack
{
private:
    type arr[size];
    int top;
public:
    TStack() :top(-1) { }
    type get() const {
        return arr[top];
    }
    void pop() {
        if (top >= 0) top--;
    }
    bool isEmpty() const {
        return top == -1;
    }
    void push(type item) {
        if (top < size - 1) arr[++top] = item;
    }
    bool isFull() const {
        return top == size - 1;
    }
};

#endif // INCLUDE_ALG_H_

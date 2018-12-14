#include "NumberStack.h"
#include <iostream>
#include <stdexcept>

NumberStack::NumberStack()
{
    this->lastElementIndex = 0;
    this->stackSize = 0;
}

NumberStack::~NumberStack()
{
    std::cout << "Destroying number stack" << std::endl;
    if (this->stackSize > 0) {
        std::cout << "Stack had : " << this->stackSize << " elements" << std::endl;
    }
    return;
}

bool NumberStack::isEmpty()
{
    if (this->stackSize > 0) {
        return false;
    }
    return true;
}

bool NumberStack::isFull()
{
    if (this->stackSize < 5) {
        return false;
    }
    return true;
}

void NumberStack::push(int number)
{
    if (this->stackSize >= 5) {
        throw std::out_of_range("Stack is full");
    }

    this->numbers[this->lastElementIndex++] = number;

    this->stackSize++;
}

int NumberStack::pop()
{
    if (this->stackSize <= 0) {
        throw std::out_of_range("Stack has no elements");
    }

    this->stackSize--;
    return this->numbers[this->lastElementIndex--];
}

int NumberStack::count()
{
    return this->stackSize;
}

int NumberStack::top()
{
    if (this->stackSize <= 0) {
        throw std::out_of_range("Stack is empty");
    }
    return this->numbers[this->lastElementIndex - 1];
}

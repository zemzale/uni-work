#include "NumberStack.h"
#include "iostream"

NumberStack::NumberStack()
{
    this->max_size = 5;
    this->size = 0;
    this->freeIndex = 0;
}

NumberStack::~NumberStack()
{
    std::cout << "Destroying the number stack" << std::endl;
    if (this->size > 0) {
        std::cout << "There are " << this->size << " elements in stack when destroying object" << std::endl;
    }
    return;
}

void NumberStack::push(int number) {
    if (this->size < this->max_size) {
        this->numbers[this->freeIndex] = number;
        std::cout << "Added element " << number << " at index " << this->freeIndex << std::endl;
        this->size++;
        this->freeIndex++;
    } else {
        std::cout << "Failed adding element " << number << " at index " << this->freeIndex << std::endl;
        std::cout << "Stack is full" << std::endl;
    }
}
int NumberStack::pop() {
    if (this->size <= 0) {
        std::cout << "Stack is empty" << std::endl;
        return 0;
    } else {
        int lastNum = this->numbers[this->freeIndex - 1];
        this->freeIndex--;
        this->size--;
        return lastNum;
    }

}
int NumberStack::count() {
    return this->size;
}

int NumberStack::top() {
    if (this->size > 0) {
        return this->numbers[this->freeIndex - 1];
    } else {
        std::cout << "Stack has no elements" << std::endl;
        return 0;
    }

}
bool NumberStack::isEmpty() {
    if (this->size > 0) {
        return false;
    }
    return true;
}
bool NumberStack::isFull() {
    if (this->size >= 5) {
        return true;
    }
    return false;
}


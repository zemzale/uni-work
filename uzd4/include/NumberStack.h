#ifndef NUMBERSTACK_H
#define NUMBERSTACK_H


class NumberStack
{
    public:
        NumberStack();
        ~NumberStack();

        void push(int number);
        int pop();
        int count();
        int top();
        bool isEmpty();
        bool isFull();
    private:
        int numbers[5];
        int stackSize;
        int lastElementIndex;

};

#endif // NUMBERSTACK_H

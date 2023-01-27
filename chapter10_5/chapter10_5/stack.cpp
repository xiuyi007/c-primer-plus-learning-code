#include "stack.h"
#include "customer.h"
#include <iostream>
Stack::Stack()
{
    top = -1;
    //这里不进行初始化没关系，虽然数组中的内容未初始化，地址里面放了啥不知道，但是由于管理stack只能通过public
    //方法，所以管理stack时，无论pop还是push，格子中初始内容不重要
}

Stack::~Stack()
{
}

int Stack::push(const customer& elem)
{
    if (top == 9) return 0;
    stack[++top] = elem;
    return 1;
}

int Stack::pop()
{
    if (top == -1) return 0;
    std::cout << "pop an elem: " << stack[top--].payment << std::endl;
    return 1;
}

bool Stack::isEmpty()
{
    if (top == -1) return true;
    return false;
}

bool Stack::isFull()
{
    if (top == 9) return true;
    return false;
}

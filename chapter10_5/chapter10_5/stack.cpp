#include "stack.h"
#include "customer.h"
#include <iostream>
Stack::Stack()
{
    top = -1;
    //���ﲻ���г�ʼ��û��ϵ����Ȼ�����е�����δ��ʼ������ַ�������ɶ��֪�����������ڹ���stackֻ��ͨ��public
    //���������Թ���stackʱ������pop����push�������г�ʼ���ݲ���Ҫ
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

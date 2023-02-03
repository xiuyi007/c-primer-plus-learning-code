// chapter12_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "cow.h"
using namespace std;
int main()
{
    Cow cow1;
    Cow cow2("Togethf", "love hf", 50);
    cout << "create a cow using default constructor: but because of nullpty, it can not cout" << endl;
    //cow1.ShowCow();
    cout << "create a cow using parameter constructor: " << endl;
    cow2.ShowCow();
    Cow cow3 = cow2;
    cout << "create a cow using copy constructor: " << endl;
    cow3.ShowCow();
    Cow cow4("hf", "love sio2", 50);
    cout << "create a cow called hf" << endl;
    cow4.ShowCow();
    cout << "using operator= to form the new obj" << endl;
    cow4 = cow3;
    cow4.ShowCow();
    cout << "program over";
}

#include "Move.h"
#include <iostream>
Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    using namespace std;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

Move Move::add(const Move& m) const
{
    int mx = this->x + m.x;
    int my = this->y + m.y;
    return Move(mx, my);
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}

#pragma once
#include <iostream>

using namespace std;

class A
{
protected:
    int x;
public:
    A(int x = 0)
    {
        this->x = x;
    }
};

class B 
    : public A
{
    int y;
public:
    B(int x = 0, int y = 0)
        : A(x)
    {
        this->y = y;
    }

    B getB(B& b)
    {
        return b;
    }

    B getB(A& a)
    {
        throw a;
    }
};

#include <iostream>
#include "Class.h"
using namespace std;

int main() 
{
    A a(1);
    B b(2, 3);
    try
    {
      B b1 = b.getB(a);
    cout << "Continue" << endl;
    }
    catch (A)
    {
        cout << "catch(A)" << endl;
        exit(2);
    }
    cout << "End" << endl;
    return 0;
}
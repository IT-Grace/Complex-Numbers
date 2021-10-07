// workshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Complex.h"

int main()
{
    Complex C1, C2, res;
    C1.SetComplex(5, 8);
    C2.SetComplex(3, 5);

    //Show complex numbers
    cout << "First complex number is: "; C1.show();
    cout << endl;
    cout << "Second Complex number is: "; C2.show();
    cout << endl;

    //Addition inplementation
    res = C1.Add(C2);
    cout << "Addition result: "; res.show();
    cout << endl;

    //Subtraction inplementation
    res = C1.Sub(C2);
    cout << "Subtraction result: "; res.show();
    cout << endl;

    //Multiplication inplementation
    res = C1.Mul(C2);
    cout << "Multiplication result: "; res.show();
    cout << endl;

    //Division inplementation
    res = C1.Div(C2);
    cout << "Division result: "; res.show();
    cout << endl;
    return 0;

}


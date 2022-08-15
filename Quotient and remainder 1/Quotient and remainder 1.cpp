// Quotient and remainder 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int digit1, digit2, digit3, digit4, r, number, N;

    cout << "enter a four digit integer: ";
    cin >> number;
     
    digit4 = number % 10;
    r = (int)(number / 10);

    digit3 = r % 10;
    r = int(r / 10);

    digit2 = r % 10;

    digit1 = int(r / 10);

    N = digit4 * 8;

    cout << "th result is " << N << endl;

    return 0;



}


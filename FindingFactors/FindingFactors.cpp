// FindingFactors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Factors.h"

using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    Factors factors(number);
    factors.findFactors();

    return 0;
}

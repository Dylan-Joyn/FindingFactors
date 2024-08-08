#include "Factors.h"

Factors::Factors(int n) : number(n) {}

void Factors::findFactors() {
    if (number <= 0) {
        cout << "Please enter a integer: " << endl;
        return;
    }

    cout << "Factors of " << number << " are: ";
    findFactorsHelper(1);
    cout << endl;
}

void Factors::findFactorsHelper(int i) {
    if (i > number / 2) {
        if (number > 1) {
            cout << number;
        }
        return;
    }

    if (number % i == 0) {
        cout << i << " ";
    }

    findFactorsHelper(i + 1);
}

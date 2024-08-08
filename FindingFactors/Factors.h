#pragma once
#ifndef FACTORS_H
#define FACTORS_H

#include <iostream>

using namespace std;

class Factors {
private:
    int number;
    void findFactorsHelper(int i);

public:
    Factors(int n);
    void findFactors();
};

#endif



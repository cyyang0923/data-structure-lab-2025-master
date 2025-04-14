#pragma once

#ifndef SPARSPOLY_H
#define SPARSEPOLY_H

#include <vector>

class SparsePoly {
private:
    int numTerms;                        
    std::vector<int> exponents;         
    std::vector<float> coefficients;      

public:
    SparsePoly();                     

    void read();                          
    void display(const char* str);         
    void add(SparsePoly a, SparsePoly b); 
};

#endif

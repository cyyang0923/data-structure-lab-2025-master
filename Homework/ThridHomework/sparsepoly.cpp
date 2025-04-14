#include "sparsepoly.h"
#include <iostream>
#include <cstdio>
using namespace std;

SparsePoly::SparsePoly() {
    numTerms = 0;
}

void SparsePoly::read() {
    printf("항의 개수를 입력하세요: ");
    scanf_s("%d", &numTerms);

    for (int i = 0; i < numTerms; ++i) {
        float coef;
        int exp;
        printf("%d번째 항의 계수와 차수를 입력하세요 (예:계수 차수): ", i + 1);
        scanf_s("%f %d", &coef, &exp);
        if (coef != 0) {
            coefficients.push_back(coef);
            exponents.push_back(exp);
        }
    }
}

void SparsePoly::display(const char* str) {
    printf("%s", str);
    for (int i = 0; i < coefficients.size(); ++i) {
        if (i > 0) printf(" + ");
        printf("%.1fx^%d", coefficients[i], exponents[i]);
    }
    printf("\n");
}

void SparsePoly::add(SparsePoly a, SparsePoly b) {
    int i = 0, j = 0;
    while (i < a.coefficients.size() && j < b.coefficients.size()) {
        if (a.exponents[i] == b.exponents[j]) {
            float sum = a.coefficients[i] + b.coefficients[j];
            if (sum != 0) {
                coefficients.push_back(sum);
                exponents.push_back(a.exponents[i]);
            }
            i++; j++;
        }
        else if (a.exponents[i] > b.exponents[j]) {
            coefficients.push_back(a.coefficients[i]);
            exponents.push_back(a.exponents[i]);
            i++;
        }
        else {
            coefficients.push_back(b.coefficients[j]);
            exponents.push_back(b.exponents[j]);
            j++;
        }
    }
    while (i < a.coefficients.size()) {
        coefficients.push_back(a.coefficients[i]);
        exponents.push_back(a.exponents[i]);
        i++;
    }
    while (j < b.coefficients.size()) {
        coefficients.push_back(b.coefficients[j]);
        exponents.push_back(b.exponents[j]);
        j++;
    }
}


int main() {
    SparsePoly A, B;

    A.read();
    A.display("Poly A: ");

    B.read();
    B.display("Poly B: ");

    SparsePoly C;
    C.add(A, B);
    C.display("Poly C: ");

    return 0;
}
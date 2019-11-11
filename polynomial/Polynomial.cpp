//
// Created by Eli Palmer on 2019-11-05.
//

#include "Polynomial.h"

Polynomial::Polynomial() {
    capacity = 0;
    degree = 0;
    coeff = new double[DEFAULT_CAPACITY];

}

Polynomial::Polynomial(double a0) {
    capacity = DEFAULT_CAPACITY;
    degree =0;
    coeff = new double[DEFAULT_CAPACITY];
    coeff[degree] = a0;

}

Polynomial::Polynomial(const Polynomial &source) {
    capacity = source.capacity;
    coeff = new double[capacity];
    degree = source.degree;

}

//
// Created by Eli Palmer on 2019-11-05.
//

#include <climits>
#include "math.h"
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

Polynomial::~Polynomial() {
    delete [] coeff;
    coeff = nullptr;
}

Polynomial &Polynomial::operator=(const Polynomial &source) {
    delete  [] coeff;
    if(this != &source) {

        this->capacity = source.capacity;
        this->coeff = source.coeff;
        this->degree = source.degree;
    }
    return *this;
}

Polynomial &Polynomial::operator=(double a0) {
    coeff[0] = a0;
    for (size_t i = 1; i < capacity; i++){
        coeff[i] = 0;
    }
    return *this;
}

void Polynomial::add_to_coeff(double amount, unsigned int k) {
    coeff[k] += amount;
}

void Polynomial::assign_coeff(double new_coefficient, unsigned int k) {
    coeff[k] = new_coefficient;
    if (k>degree){
        degree = k;
    }
}

void Polynomial::clear() {
    for (size_t i = 0; i < capacity; ++i){
        coeff[i] = 0;
    }
    degree = -1;
}

void Polynomial::reserve(size_t number) {
    if (number > capacity){
        double *newArray = new double[number];
        for (unsigned int i = 0; i <= degree; ++i){
            newArray[i] = coeff[i];
        }

        for (unsigned int j = degree+1; j<number; j++){
            newArray[j] = 0;
        }
        delete [] coeff;
        coeff=newArray;
        capacity = number;
    }
}

double Polynomial::coefficient(unsigned int k) const {
    return coeff[k];
}

unsigned int Polynomial::getDegree() const {
    return degree;
}

unsigned int Polynomial::next_term(unsigned int k) const {
    unsigned int i = k+1;
    while (coeff[i] == 0 && i <= degree){
        i++;
    }
    if (coeff[i]>0){
        return i;
    }else {
        return UINT_MAX;
    }
}

double Polynomial::eval(double x) const {
    double result = 0;
    for (int i = 0; i <= degree; i++){
        result += coeff[i] * pow(x , i);
    }
    return result;
}

double Polynomial::operator()(double x) const {
    eval(x);
}

Polynomial &Polynomial::operator*(const Polynomial &p) {
    unsigned int max = (p.degree > degree ? p.degree : degree);
    return <#initializer#>;
}

Polynomial &Polynomial::operator+(const Polynomial &p) {
    unsigned int max = (p.degree > degree ? p.degree : degree);
    for(unsigned int i = 0; i <= max; i++){
        coeff[i] = coeff[i] + p.coeff[i];
    }
    degree = max;
    return *this;
}

Polynomial &Polynomial::operator-(const Polynomial &p) {
    unsigned int max = (p.degree > degree ? p.degree : degree);
    for(unsigned int i = 0; i <= max; i++){
        coeff[i] = coeff[i] - p.coeff[i];
    }
    degree = max;
    return *this;
}

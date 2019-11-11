//
// Created by Eli Palmer on 2019-11-05.
//

#ifndef POLYNOMIAL_POLYNOMIAL_H
#define POLYNOMIAL_POLYNOMIAL_H


#include <cstdlib>

class Polynomial {
private:
    static const size_t DEFAULT_CAPACITY = 10;
    //Storage
    double *coeff;
    size_t capacity;
    size_t degree;
public:
    Polynomial();
    Polynomial(double a0);
    Polynomial(const Polynomial& source);
    ~Polynomial();

    Polynomial& operator = (const Polynomial& source);
    Polynomial& operator = (double a0);

    void add_to_coeff(double amount, unsigned int k);
    void assign_coeff(double new_coefficient, unsigned int k);
    void clear();
    void reserve(size_t number);

    double coefficient(unsigned int k) const;
    unsigned int getDegree( ) const;
    unsigned int next_term(unsigned int k) const;

    double eval(double x) const;
    double operator ( )(double x) const;

    Polynomial& operator *(const Polynomial& p);
    Polynomial& operator +(const Polynomial& p);
    Polynomial& operator -(const Polynomial& p);
};


#endif //POLYNOMIAL_POLYNOMIAL_H

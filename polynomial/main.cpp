#include <iostream>
#include "Polynomial.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Polynomial p1;
    p1.assign_coeff(4,3);
    p1.add_to_coeff(3, 1);
    p1.add_to_coeff(2,0);
    Polynomial p2;
    p2.assign_coeff(3,2);
    p2.add_to_coeff(2,1);
    p2.add_to_coeff(1,0);

    std::cout << "The degrees of poly1 and poly2 is " << p1.getDegree() << " and " << p2.getDegree() << std::endl;

    p1 = p1*p2;
    int x;
    std::cout << "The degrees of poly1 and poly2 is " << p1.getDegree() << " and " << p2.getDegree() << std::endl;
    for (int i = 5; i >= 0; --i) {
        std::cout << p1.coefficient(i) << "x^" << i << ", ";
    }
    return 0;
}
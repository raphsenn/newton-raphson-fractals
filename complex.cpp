#include <cstdio>
#include "complex.h"

Complex Complex::operator+(Complex z) {
    return Complex(re + z.re, im + z.im);
}

Complex Complex::operator+(double lambda) {
    return Complex(re + lambda, im);
}

Complex Complex::operator-(double lambda) {
    return Complex(re - lambda, im);}

Complex Complex::operator-(Complex z) {
    return Complex(re - z.re, im - z.im);
}

Complex Complex::operator*(Complex z) {
    return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
}

Complex Complex::operator/(Complex z) {
    return (neg(z) * Complex(re, im)) * Complex(1 / (abs(z)*abs(z)), 0);
}

bool Complex::operator==(Complex z) {
    double a = std::abs(re - z.re);
    double b = std::abs(im -z.im);
    if (a < 1e-6 && b < 1e-6){
        return true;
    }
    else {return false;}
}

Complex inverse(Complex z){
    return Complex(z.re / (z.re * z.re + z.im * z.im), - z.im / (z.re * z.re + z.im * z.im));
}

Complex neg (Complex z) {
    return Complex(z.re, -z.im);
}

double abs (Complex z) {
    return sqrt(z.re * z.re + z.im * z.im);
}

int arg(Complex z) {return atan2(z.re, z.im);}

void print(Complex z) { printf("%f + %fi", z.re, z.im);}

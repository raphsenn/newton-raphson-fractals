#include <cmath>

class Complex {

    public:
    Complex(double real, double imaginary) : re(real), im(imaginary) {}
    double re;
    double im;
    Complex operator+(Complex);
    Complex operator+(double);
    Complex operator-(double);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator*(double);
    Complex operator/(Complex);
    bool operator==(Complex);
};

// inverse of complex numbers.
Complex inverse (Complex);

Complex neg (Complex);

double abs (Complex);

int arg (Complex);

void print(Complex z);


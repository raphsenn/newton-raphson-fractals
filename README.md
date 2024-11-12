# Newton-Raphson-Fractals

Newton-Raphson fractals are captivating and visually stunning representations of complex polynomial equations.

Newton fractal for $\ z^8-15z^4-16$, $\ z^{12} - 1$ and $\ z^5-1$

<p float="left">
   <img src="./rsc/z^8-15z^4-16.png" width=200 height=200>
   <img src="./rsc/z^12-1.png" width=200 height=200>
    <img src="./rsc/z^4-1.png" width=200 height=200>
</p>

Newton fractal for $\ z^3 - 1$, $\ z^8 - 1$ and $\ z^3-2z-2$

<p float="left">
   <img src="./rsc/z^3-1.png" width=200 height=200>
   <img src="./rsc/z^8-1-ppm.png" width=200 height=200>
    <img src="./rsc/z^3-2z-2.png" width=200 height=200>
</p>

## Mathematical expressions
In the syntax of this program, mathematical expressions involving complex numbers are made intuitive.

### For Example

```cpp
Complex z(1, 1);
Complex u = z * z * z // represends z^3

Complex w = Complex(12, 0) * z * z // represends 12 * z^2

Complex x = z*z*z*z - 1 // represends z^4 - 1
```

## Getting Started with make
To create captivating Newton-Raphson fractal images with this program, follow these simple steps to get started:

1. **Define Your Polynomial:** Open the main.cpp file within the project directory. Here, you can define your complex polynomial equation f(z) and its derivative df(z) inside the provided functions Complex f(Complex z) and Complex df(Complex z). Customize these functions with your own polynomial expressions as desired.

```cpp
Complex f(Complex z) {
    return z * z * z - 1; // Define your complex polynomial here (represends z^3 - 1)
}

Complex df(Complex z) {
    return Complex(3, 0) * (z * z); // Define the derivative of your polynomial here (represends 3 * z^2)
}
```
2. **Save Your Changes:** Save the modifications you made to main.cpp.

3. **Build the Program:** Use the provided Makefile to build the program. Run the following command:
```shell
make all
```

4. **Generate the Fractal:** Execute the program to generate the fractal image based on your custom polynomial equation:
```shell
./main
```
7. **Finished:** The generated fractal image will be saved as **fractal.ppm** in the project directory.

## Getting Started without make
To create captivating Newton-Raphson fractal images with this program, follow these simple steps to get started:


1. **Define Your Polynomial:** Open the main.cpp file within the project directory. Here, you can define your complex polynomial equation f(z) and its derivative df(z) inside the provided functions Complex f(Complex z) and Complex df(Complex z). Customize these functions with your own polynomial expressions as desired.
```shell
Complex f(Complex z) {
    return z * z * z - 1; // Define your complex polynomial here (represends z^3 - 1)
}

Complex df(Complex z) {
    return Complex(3, 0) * (z * z); // Define the derivative of your polynomial here (represends 3 * z^2)
}
```
2. **Save Your Changes:** Save the modifications you made to main.cpp.

3. **Build the Program:** Here's the order of commands to compile the main program without using make, assuming you have the source files complex.cpp, complex.h and main.cpp:

```shell
g++ -c complex.cpp
g++ -c main.cpp
g++ complex.o main.o -o main
```

4. **Generate the Fractal:** Execute the program to generate the fractal image based on your custom polynomial equation:
```shell
./main
```
5. **Finished:** The generated fractal image will be saved as **fractal.ppm** in the project directory.
## Error solving
If you encounter an error message similar to the following:

```shell
User
g++ -c complex.cpp
cc   main.o complex.o   -o main
/usr/bin/ld: complex.o: in function `abs(Complex)':
complex.cpp:(.text+0x7a4): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
```
To resolve this issue, you need to link the math library explicitly when compiling your program. You can do this by adding the -lm flag to your compile command, like this:

```shell
g++ main.o complex.o -o main -lm
```


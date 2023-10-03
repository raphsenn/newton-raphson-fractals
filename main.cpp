#include "complex.h"
#include <cstdio>
#define TAU 6.283185307

// Your Function f
Complex f (Complex z) {
    return z*z*z - 1;
}

// Derivate of your Function f
Complex df (Complex z) {
    return Complex(3, 0) * (z*z);
}


void print_image(const char *filename) {
    int iter = 100;
    double tol = 0.0001;
    int W = 500;
    int H = 500;
    FILE *fp = fopen(filename, "w");
    
    fprintf(fp, "P3\n");
    fprintf(fp, "# file created by <author name>\n");
    fprintf(fp, "%d\n", W);
    fprintf(fp, "%d\n", H);
    fprintf(fp, "255\n");

    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            Complex z(j * 4.0 / W - 2, -i * 4.0 / H + 2);
            
            int k;
            for (k = 0; k < iter; k++) {
                if (abs(f(z)) < tol) {
                    break;
                }
                z = z - (f(z) / df(z));
            }
            // fractal coloured by root reached 
            int color1 = (k * 255) / iter;
            int color2 = (k * 255) / iter;
            int color3 = (k * 255) / iter;
            fprintf(fp, "%d %d %d ", color1, color2, color3);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

int main() {
    print_image("fractal.ppm");
}

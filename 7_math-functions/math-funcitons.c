#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    double A = sqrt(9);   // 3
    double B = pow(2, 4); // 16
    int C = round(3.14);  // 3
    int D = ceil(3.14);   // 4
    int E = floor(3.99);  // 3
    double F = abs(-100); // 100
    double G = log(3);    // 1.098612
    double H = sin(45);   // 0.850904
    double I = cos(45);   // 0.525322
    double J = tan(45);   // 1.619775

    printf("A: %f\n", A);
    printf("B: %f\n", B);
    printf("C: %d\n", C);
    printf("D: %d\n", D);
    printf("E: %d\n", E);
    printf("F: %f\n", F);
    printf("G: %f\n", G);
    printf("H: %f\n", H);
    printf("I: %f\n", I);
    printf("J: %f\n", J);
}
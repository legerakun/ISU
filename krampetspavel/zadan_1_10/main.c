#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double funcR(double a, double b, double c, double *A, double *B, double *C)
{
    *A = sqrt((a*a) + (b*b) + (c*c));

    *B = acos(c/ *A);

    *C = atan(b/a);
}

int main()
{
    double x, y, z, R, O, F;

    printf("Input x = ");
    scanf("%lf", &x);
    printf("\nInput y = ");
    scanf("%lf", &y);
    printf("\nInput z = ");
    scanf("%lf", &z);

    funcR(x, y, z, &R, &O, &F);

    printf("\nR = %lf", R);
    printf("\nO = %lf", O);
    printf("\nF = %lf", F);

    return 0;
}


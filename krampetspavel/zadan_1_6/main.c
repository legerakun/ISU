#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j;
    double a[20], max = -3, f = 6./32767;
    srand(5);

    for(i = 0; i < 20; i++) {
        a[i] = rand() * f - 3;
        printf("%d = %6.3lf \n", i, a[i]);
    }

    for(i = 0; i < 20; i++) {
        if(a[i] > max) {
            max = a[i];
            j = i;
        }
    }

    printf("\nmax[%d] = %6.3lf\n", j, max);

    return 0;
}

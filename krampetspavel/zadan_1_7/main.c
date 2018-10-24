#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, k, a[6][6];
    double f = 1./32767 * 200;
    srand(5);

    for(i = 0; i < 6; i++) {
        printf("\n");
        for(j = 0; j <6; j++) {
            a[i][j] = rand() * f;
            printf(" %3d", a[i][j]);
        }
    }

    printf("\n------------------------\n");

    for(i = 0; i < 6; i++) {
        for(j = i; j <6; j++) {
            k = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = k;
        }
    }

    for(i = 0; i < 6; i++) {
        printf("\n");
        for(j = 0; j <6; j++) {
            printf(" %3d", a[i][j]);
        }
    }

    return 0;
}

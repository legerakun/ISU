#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, n, fc;
    printf("\nInput n = ", n);
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fc = factFunction(i);
        printf("\nfact(%d) = %d", i, fc);
    }

    return 0;
}

int factFunction(int j)
{
    int fc = 1, i = 1;

    while(i <= j) {
        fc = fc * i;
        i++;
    };

    return(fc);
}

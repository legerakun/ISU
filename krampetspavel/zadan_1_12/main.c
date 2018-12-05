#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i = 0;
    double k = 0, a = 0, b = 0;

    FILE *file;

    file = fopen("D://users//krampetspavel//zadan_1_11//dat.txt", "r");

    fseek(file, 31, SEEK_SET);

    for(i = 0; i < 15; i++) {
        if((i)%2 == 0) {
            fseek(file, 31 + (10 * i), SEEK_SET);
            fscanf(file, "%lf", &k);
            printf("%lf\n", k);
            a+= k;
        }
    }

    b = a / 8;

    printf("\nSR: %lf", b);

    fclose(file);

    return 0;
}

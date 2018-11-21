#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i = 0, e = 0;
    double a = 1./32767 * 12, d = 1./32767 * 8.5, f = 0;
    srand(5);

    FILE *file;

    file = fopen("D://users//krampetspavel//zadan_1_11//dat.txt", "w+t");

    fprintf(file, "%p\n", file);

    for(i = 0; i < 6; i++) {
        e = rand() * a + 1;

        fprintf(file, "%d  ", e);
    }

    for(i = 0; i < 15; i++) {
        f = rand() * d + 0.5;

        fprintf(file, "\n%lf", f);
    }

    fclose(file);

    return 0;
}

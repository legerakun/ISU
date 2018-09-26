#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 4;

    printf("Hello world!\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %lf\n", a, b, a*1.0 / b);

    return 0;
}

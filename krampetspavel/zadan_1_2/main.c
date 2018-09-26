#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double a = 30.0, b = 45.0, c = 60.0;

    printf("a     tg(a) ctg(a)\n");
    printf("%6.3lf  %6.3lf  %6.3lf\n", a, tan(a * M_PI / 180), 1 / tan(a * M_PI / 180));
    printf("%6.3lf  %6.3lf  %6.3lf\n", b, tan(b * M_PI / 180), 1 / tan(b * M_PI / 180));
    printf("%6.3lf  %6.3lf  %6.3lf\n", c, tan(c * M_PI / 180), 1 / tan(c * M_PI / 180));

    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double a, b, c, d, h, A, B;

    printf("ax2 + bx + c\n\n");
    printf("INPUT a, b, c = ");
    scanf("%lf, %lf, %lf", &a, &b, &c);

    if(a == 0) {
        printf("x = %6.3lf\n", -c/b);
    }else{
        printf("\nD = %10.3lf\n\n", ((b*b) - (4 * a * c))); d = (b*b) - (4 * a * c);

        if(d < 0) {
            A = -b / (2 * a);
            B = (sqrt(-d))/ (2 * a);

            printf("x1 = %6.3lf + %6.3lfi\n", A, B);
            printf("x2 = %6.3lf - %6.3lfi\n", A, B);
        }else{
            h = sqrt(d);

            if(h == 0) {
                printf("x = %6.3lf\n", (-b) / (2 * a));
            }else{
                printf("x1 = %6.3lf\n", ((-b) - h) / (2 * a));
                printf("x2 = %6.3lf\n", ((-b) + h) / (2 * a));
            }
        }
    };

    return 0;
}


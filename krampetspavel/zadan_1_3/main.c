#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double a;

    printf("INPUT a = ");
    scanf("%lf", &a);
    printf("sin(%6.3lf) = %6.3lf\n", a, sin(a * M_PI / 180)); //sin(a)=...
    printf("arccos(%6.3lf) = %6.3lf", a, acos(a * M_PI / 180)); //arccos(a)==...
    printf("arccos(%6.3lf) = %6.3lf", a, acos(a * M_PI / 180)); //���(a).==...
    printf("ln(%6.3lf",a , log(a); //ln(a)=^...
    printf("ceil(%6.3lf",a , ceil(a * M_PI / 180)); //ceil(a)=...
    printf("floor(%6.3lf",a , floor(a * M_PI / 180)); //floor(a)=...
    printf("sqrt(%6.3lf",a , sqrt(a * M_PI / 180)); //sqrt(a)=�
    printf("pow(%6.3lf",a , pow(a * M_PI / 180)); //pow(2,a)=...

    return 0;
}
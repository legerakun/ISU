#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i = 1,k = 0, n, fact = 1, fact1 = 1, fact2 = 1;

    printf("Input n = ");
    scanf("%d", &n);
    printf("n! = ");

    while(i <= n) {
        fact = fact * i;
        i++;
    };

    printf("%d\n", fact);
    printf("-----------\n");
    printf("n! = ");

    i = 1;

    do {
        fact1 = fact1 * i++;
    } while (i <= n);

    printf("%d\n", fact1);
    printf("-----------\n");
    printf("n! = ");


    for(i = 1; i <= n; i++) {
        fact2 = fact2 * i;
    }

    printf("%d", fact2);

    return 0;
}

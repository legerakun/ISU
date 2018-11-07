#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a[10];
    double f = 1./32767 * 10;
    srand(4);

    for(i = 0; i < 10; i++){
        *(a + i) = rand() * f + 1;
        printf("%d %d\n", i + 1, *(a + i));
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        if((i + 1)%2 == 0){
            printf("%d %d %p\n", i + 1, *(a + i), (a + i));
        }
    }

    return 0;
}

#include <stdio.h>

#define VARCONST 100

int main() {
    int x;
    float c99 = 20.9;
    
    x = VARCONST;

    // scanf("%d", &x);

    printf("constante = %d\n", x);
    printf("valor float = %.1f\n", c99);

    return 0;
}
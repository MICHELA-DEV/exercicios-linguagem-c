#include <stdio.h>
#include <stdlib.h>

int FATORIAL(int N) {
    int I, F = 1;
    for(I = 1; I <= N; I++) {
        F = F * I;
    }
    return F;
}

int main() {
    int X, Y;
    printf("DIGITE UM VALOR INTEIRO: ");
    scanf("%d", &X);
    
    if (X > 0) {
        printf("X e positivo\n");
        Y = FATORIAL(X);
        printf("Fatorial de X e %d\n", Y);
    } else {
        if (X < 0) {
            printf("X e negativo\n");
        } else {
            printf("X e zero\n");
        }
    }
    
    printf("Fim do programa!\n");
    system("pause");

    return 0;
}
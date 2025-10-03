#include <stdio.h>;

int main () {
    int torre, bispo = 1, rainha = 1;
    
    
    printf("Torre: \n");
    for (torre = 1; torre <= 5; torre++ ) {
        printf("Direita\n");
    }
    printf("-------------------\n");
    
    printf("Bispo: \n");
    while (bispo <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }
    printf("-------------------\n");
    
    printf("Rainha: \n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}   
#include <stdio.h>;

int main () {
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;
    
    // Movimento da Torre
    printf("Torre: \n");
    for (torre; torre <= 5; torre++ ) {
        printf("Direita\n");
    }
    printf("-------------------\n");
    
    // Movimento do Bispo
    printf("Bispo: \n");
    while (bispo <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }
    printf("-------------------\n");
    
    // Movimento da Rainha
    printf("Rainha: \n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    printf("-------------------\n");
    
    // Movimento do Cavalo
    printf("Cavalo: \n");
    for (int i = 1; i <= 1; i++) {

        // Movimento pra baixo
        do {
            
            printf("Baixo\n");
            cavalo++;
            
        } while ( cavalo == 2 );

        // Movimento pra esquerda
        printf("Esquerda\n");
        
        }            
    printf("-------------------\n");

    return 0;
}   
#include <stdio.h>;

void movimentoTorre(int casas) {
    if (casas > 0 ) {
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}

void movimentoBispo(int casas) {
    if (casas > 0 ) {
        printf("Cima\n");
        printf("Direita\n");
        movimentoBispo(casas - 1);
    }
}

void movimentoRainha(int casas) {
    if (casas > 0 ) {
         printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}


int main () {
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;
    
    // Movimento da Torre
    printf("TORRE: \n");
    movimentoTorre(5);
    /*
    for (torre; torre <= 5; torre++ ) {
        printf("Direita\n");
    }
    */
    printf("-------------------\n\n");
    
    // Movimento do Bispo
    printf("BISPO: \n");
    movimentoBispo(5);
    /*
    while (bispo <= 5) {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }
    */
    printf("-------------------\n\n");
    
    // Movimento da Rainha
    printf("DAMA: \n");
    movimentoRainha(8);
    /*
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    */
    printf("-------------------\n\n");
    
    // Movimento do Cavalo
    printf("CAVALO: \n");

    for (int i = 1; i <= 1; i++) {
        
    // Movimento pra baixo
    do {
        
    printf("Cima\n");
    cavalo++;
    
    } while ( cavalo == 2 );

    // Movimento pra esquerda
    printf("Direita\n");

    }            
 
    printf("-------------------\n\n");

    return 0;
}   
#include <stdio.h>;

int main () {
    int numero, i;
    
    printf("Escolha um número: ");
    scanf("%i", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n",  i, numero, numero * i);
    }

    return 0;
}git remote add origin https://github.com/mrmath12/xadrez.git
git branch -M main
git push -u origin main
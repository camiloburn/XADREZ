#include <stdio.h>

int main() {
    //  MOVIMENTO DA TORRE 
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n");

    //  MOVIMENTO DO BISPO 
    int passo = 1;
    printf("Movimento do Bispo:\n");
    while (passo <= 5) {
        printf("Cima e Direita (%d casa)\n", passo);
        passo++;
    }

    printf("\n");

    //  MOVIMENTO DA RAINHA 
    int cont = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d casa)\n", cont);
        cont++;
    } while (cont <= 8);

    printf("\n");

    
    // Cavalo: move 2 casas pra baixo e 1 pra esquerda 
    printf("Movimento do Cavalo:\n");

    // Loop for controla o movimento pra baixo
    for (int i = 1; i <= 2; i++) {
        printf("Baixo (%d casa)\n", i);

        
        int j = 1;
        while (j < i) {
            j++;
        }
    }

    // Movimento final pra esquerda
    for (int k = 1; k <= 1; k++) {
        printf("Esquerda (%d casa)\n", k);
    }

    printf("\nFim da simulação do nível Aventureiro.\n");
    return 0;
}

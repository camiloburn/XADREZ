#include <stdio.h>

//  Função da Torre 
void torre(int casas) {
    if (casas == 0) return; // caso base
    printf("Direita (%d casa)\n", casas);
    torre(casas - 1); // chamada recursiva
}

// Função do Bispo com loops aninhados 
void bispo(int v, int h) {
    if (v == 0) return;
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= h; j++) {
            printf("Cima e Direita (movimento %d,%d)\n", i, j);
        }
    }
}

// Função recursiva da Rainha 
void rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda (%d casa)\n", casas);
    rainha(casas - 1);
}

//  Cavalo com loops complexos e controle de fluxo 
void cavalo() {
    printf("Movimento do Cavalo:\n");

    for (int i = 1, j = 2; i <= 2 && j > 0; i++, j--) {
        if (i == j) {
            printf("Baixo (%d casa)\n", i);
            continue; // pula o restante e volta pro loop
        }

        if (i > 2) break; 
    }

    printf("Esquerda (1 casa)\n");
}

int main() {
    printf("=== NÍVEL MESTRE ===\n\n");

    printf("Movimento da Torre:\n");
    torre(5);

    printf("\nMovimento do Bispo:\n");
    bispo(2, 2);

    printf("\nMovimento da Rainha:\n");
    rainha(8);

    printf("\n");
    cavalo();

    printf("\nFim da simulação do nível Mestre.\n");
    return 0;
}

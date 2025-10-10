#include <stdio.h>

int main() {
    // --- MOVIMENTO DA TORRE (for) ---
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n"); // Separador visual

    // --- MOVIMENTO DO BISPO (while) ---
    int passo = 1;
    printf("Movimento do Bispo:\n");
    while (passo <= 5) {
        printf("Cima e Direita (%d casa)\n", passo);
        passo++;
    }

    printf("\n");

    // --- MOVIMENTO DA RAINHA (do-while) ---
    int cont = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d casa)\n", cont);
        cont++;
    } while (cont <= 8);

    printf("\nFim da simulação do nível Novato.\n");
    return 0;
}

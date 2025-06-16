#include <stdio.h>

int main() {
    // =========================
    // Movimento da TORRE
    // =========================
    // Descrição: Move 5 casas para a direita usando estrutura FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita (Casa %d)\n", i);
    }

    printf("\n");

    // =========================
    // Movimento do BISPO
    // =========================
    // Descrição: Move 5 casas na diagonal para cima e direita usando WHILE
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");

    int contadorBispo = 1;
    while (contadorBispo <= 5) {
        printf("Cima Direita (Casa %d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // =========================
    // Movimento da RAINHA
    // =========================
    // Descrição: Move 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    int contadorRainha = 1;
    do {
        printf("Esquerda (Casa %d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= 8);

    printf("\n");

    return 0;
}

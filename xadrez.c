#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int TorreMov = 5;
    const int BispMov = 5;
    const int RainhaMov = 8;
    int controlW = 0;
    int controlD = 0;

    while (controlW < TorreMov ) {
        printf("Movimento da Torre: ");
        printf("Direita\n");
        controlW ++;
    }

    printf("---------\n");

    do {
        controlD ++;
        printf("Movimento do Bispo: ");
        printf("Cima, ");
        printf("Direita\n");

    } while (controlD < BispMov);

    printf("---------\n");

    for (int i = 0; i < 8; i++) {
        printf("Movimento da Rainha: ");
        printf("Esquerda\n");

    }
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    return 0;
}

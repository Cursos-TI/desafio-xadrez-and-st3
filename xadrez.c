#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int TorreMov = 5;
    const int BispMov = 5;
    const int RainhaMov = 8;
    const int CavaloMov = 3;
    int controlW = 0;
    int controlD = 0;
    int controlC_Esquerda;
    int controlC_Baixo;

    // Lógica do movimento da Torre

    while (controlW < TorreMov ) {
        printf("Movimento da Torre: ");
        printf("Direita\n");
        controlW ++;
    }

    printf("---------\n");

    // Lógica do movimento do Bispo

    do {
        controlD ++;
        printf("Movimento do Bispo: ");
        printf("Cima, ");
        printf("Direita\n");

    } while (controlD < BispMov);

    printf("---------\n");

    // Lógica do movimento da rainha

    for (int i = 0; i < 8; i++) {
        printf("Movimento da Rainha: ");
        printf("Esquerda\n");

    }
    
    printf("---------\n");

    // Lógica do movimento do cavalo

    // for que contabiliza os 3 movimentos básicos do cavalo
    for (int i = 0; i < CavaloMov; i++) {
        // while que imprime os movimentos direcionados do cavalo e fixo para no final movimentar para esquerda.
        while (controlC_Esquerda < 1) {
            printf("Movimento do Cavalo: ");

            // while fixo para movimentar o cavlo para duas casas
            while (controlC_Baixo < 2)
            {
                printf("Baixo, ");

                controlC_Baixo++;
            }
            controlC_Esquerda++;

            printf("Esquerda");
        }
        
    }

    printf("\n------------");

    return 0;
}

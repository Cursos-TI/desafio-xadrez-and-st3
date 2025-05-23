#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int TorreMov = 5;
    const int BispMov = 5;
    const int RainhaMov = 8;
    const int CavaloMov = 3;
    int j = 0;
    int colUp = 0;
    int colRight = 0;
    

    // Function de movimento da Torre
    void FuncMoveTorre(int m) {

        if (m > 0) {
            printf(" Direita");

            FuncMoveTorre(m - 1);
        }
    }

    // Function de movimento do Bispo
    void FuncMoveBispo(int m) {
        if (m > 0) {
                colUp++;
                printf(" Cima");

                while (colRight < colUp) {
                    printf(" Direita");
                    colRight++;

                }
                
            
                FuncMoveBispo(m - 1);
        }
            
    }
    
    // Function de movimento da Rainha
    void FuncMoveRainha(int m) {

        if (m > 0) {
            printf(" Esquerda");

            FuncMoveRainha(m - 1);
        }
    }

    // Function de movimento do Cavalo
    void FuncMoveCavalo(int m) {
        for (int i = 0; i < m && j != 1; i++) {

            if (i == (m - 1)) {
                while(j < 1) {
                printf(" Direita");
                j++;
                
            }
            break;
            }
            printf(" Cima");

        }
    }

    // Output the data

    printf("------------\n");

    printf("Movimento da Torre para:");
    FuncMoveTorre(TorreMov);

    printf("\n------------\n");

    printf("Movimento do Bispo para: ");
    FuncMoveBispo(BispMov);

    printf("\n------------\n");

    printf("Movimento da Rainha para:");
    FuncMoveRainha(RainhaMov);

    printf("\n------------\n");

    printf("Movimento da Cavalo para:");
    FuncMoveCavalo(CavaloMov);

    printf("\n------------");


    /*
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
        
    }*/
    return 0;
}

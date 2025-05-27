#include <stdio.h>
// Desafio de Xadrez - MateCheck
// Estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Primeiramente são declaradas as variáveis e as movimentações de cada peça. Depois, cada recursão dos movimentos.

int main() {
    int movTorre  = 5;
    int movBispo = 5;
    int movRainha = 8;

    // Movimento da Torre
    printf("Movimento Torre:\n");
    moverTorre(movTorre);

    // Movimentação do Bispo 
    printf("\n Movimento Bispo:\n");
    moverBispo(movBispo);

    // Movimentação da Rainha 
    printf("\nMovimento Rainha:\n");
    moverRainha(movRainha);

    // Movimentação do Cavalo com loops complexos
    printf("\nMovimento Cavalo (para cima e direita):\n");
    int i, j;
    int movimentos = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (movimentos == 2 && j == 0) {
                continue; // evita subir
            }
            if (movimentos < 2 && j == 0) {
                printf("Cima\n");
                movimentos++;
            } else if (movimentos == 2 && j == 1) {
                printf("Direita\n");
                movimentos++;
                break; // para fazer "L"
            }
        }
        if (movimentos >= 3) {
            break; // movimento completo
        }
    }

// Recursão para mover a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
        }
    }

// Recursão para mover o Bispo utilizando loops
void moverBispo(int passos) {
    if (passos > 0) {
    // Loop externo: 1 passo para cima
        for (int v = 0; v < 1; v++) {
            printf("Cima");
            // Loop interno: 1 passo para a direita
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");
                moverBispo(passos - 1);
        }
    }

    // Recursão para mover a Rainha 
    void moverRainha(int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            moverRainha(casas - 1);
        }
    }

    return 0;
}

#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int movTorre  = 5;
    int movBispo = 5;
    int movRainha = 8;

    // Movimento da Torre (recursivo)
    printf("Movimento Torre:\n");
    moverTorre(movTorre);

    // Movimentação do Bispo (recursivo com loops)
    printf("\n Movimento Bispo:\n");
    moverBispo(movBispo);

    // Movimentação da Rainha (recursiva)
    printf("\nMovimento Rainha:\n");
    moverRainha(movRainha);

    // Movimentação do Cavalo com loops complexos
    printf("\nMovimento do Cavalo (para cima e direita):\n");
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
                break; // completa o "L"
            }
        }
        if (movimentos >= 3) {
            break; // movimento completo
        }
    }
    
    return 0;
}

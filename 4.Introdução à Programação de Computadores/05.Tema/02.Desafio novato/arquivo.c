#include <stdio.h>

int main(){
    //Tabuleiro 10x10 - 0: Água, 3: Navio
    int tabuleiro[10][10];
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    //Navio horizontal
    int linhaH = 2;
    int colunaH = 3;

    //Navio vertical
    int linhaV = 5;
    int colunaV = 7;

    //Tabuleiro com água
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    //Verifica se o navio horizontal cabe no tabuleiro
    if (colunaH + 3 <= 10) {
        // Verifica cada posição do navio
        for (int i = 0; i < 3; i++) {
            // Verifica se não existe outro navio
            if (tabuleiro[linhaH][colunaH + i] == 0) {
                tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
            }
        }
    }

    // Verifica se o navio vertical cabe no tabuleiro
    if (linhaV + 3 <= 10) {
        // Verifica cada posição do navio
        for (int i = 0; i < 3; i++) {
            // Verifica se não existe outro navio
            if (tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = navioVertical[i];
            }
        }
    }

    //Tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    
    return 0;
}
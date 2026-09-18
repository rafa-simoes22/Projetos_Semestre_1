#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

//Posiciona um navio no tabuleiro
int posicionarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
int linha,//linha inicial do navio
int coluna,//coluna inicial do navio
int linhaDir,//direção aplicada à linha
int colunaDir/*direção aplicada à coluna*/) 
{
    //Verificação de todas as posições do navio
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int novaLinha = linha + i * linhaDir;
        int novaColuna = coluna + i * colunaDir;

        // Verifica se a posição está fora do tabuleiro
        if (novaLinha < 0 || novaLinha >= TAMANHO_TABULEIRO ||
            novaColuna < 0 || novaColuna >= TAMANHO_TABULEIRO) {
            return 0;
        }
        // Verifica se a posição está ocupada
        if (tabuleiro[novaLinha][novaColuna] != 0) {
            return 0;
        }
    }

    //Inserindo o navio
    for (int i = 0; i < TAMANHO_NAVIO; i++) {

        int novaLinha = linha + i * linhaDir;
        int novaColuna = coluna + i * colunaDir;

        tabuleiro[novaLinha][novaColuna] = 3;
    }

    return 1;
}

int main() {
    //Tabuleiro 10x10 - 0: Água, 3: Navio
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    //Tabuleiro com água
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    //Navio Horizontal
    if (posicionarNavio(tabuleiro, 2, 3, 0, 1)) {
        printf("Navio horizontal posicionado.\n");
    } else {
        printf("Erro ao posicionar o navio horizontal.\n");
    }

    //Navio Vertical
    if (posicionarNavio(tabuleiro, 5, 7, 1, 0)) {
        printf("Navio vertical posicionado.\n");
    } else {
        printf("Erro ao posicionar o navio vertical.\n");
    }

    //Navio Diagonal
    if (posicionarNavio(tabuleiro, 0, 0, 1, 1)) {
        printf("Navio diagonal descendente posicionado.\n");
    } else {
        printf("Erro ao posicionar o navio diagonal descendente.\n");
    }

    //Navio Diagonal Ascendente
    if (posicionarNavio(tabuleiro, 2, 9, 1, -1)) {
        printf("Navio diagonal ascendente posicionado.\n");
    } else {
        printf("Erro ao posicionar o navio diagonal ascendente.\n");
    }

    //Tabuleiro
    printf("\n");
    printf("TABULEIRO BATALHA NAVAL\n\n");
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
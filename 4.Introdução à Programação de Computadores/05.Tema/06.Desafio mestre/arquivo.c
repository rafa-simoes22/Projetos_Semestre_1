#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define TAMANHO_HABILIDADE 5

//Valores utilizados no tabuleiro
#define AGUA 0
#define NAVIO 3
#define AREA_HABILIDADE 5

//Posicionar um navio
int posicionarNavio(
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
    int linha,
    int coluna,
    int linhaDir,
    int colunaDir
) 
{
    //Verifica todas as posições que o navio ocupará
    for (int i = 0; i < TAMANHO_NAVIO; i++) {

        int novaLinha = linha + i * linhaDir;
        int novaColuna = coluna + i * colunaDir;

        //Verifica se a posição está fora do tabuleiro
        if (novaLinha < 0 || novaLinha >= TAMANHO_TABULEIRO ||
            novaColuna < 0 || novaColuna >= TAMANHO_TABULEIRO) {
            return 0;
        }
        //Verifica se a posição já está ocupada
        if (tabuleiro[novaLinha][novaColuna] != AGUA) {
            return 0;
        }
    }

    //Se todas as posições forem válidas, coloca o navio
    for (int i = 0; i < TAMANHO_NAVIO; i++) {

        int novaLinha = linha + i * linhaDir;
        int novaColuna = coluna + i * colunaDir;

        tabuleiro[novaLinha][novaColuna] = NAVIO;
    }

    return 1;
}

//Cone
void criarCone(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (int coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            // Distância da coluna atual em relação ao centro
            int distanciaCentro = coluna - TAMANHO_HABILIDADE / 2;
            // Quanto mais para baixo, maior é a largura do cone
            if (distanciaCentro < 0) {
                distanciaCentro = -distanciaCentro;
            }
            if (distanciaCentro <= linha) {
                matriz[linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0;
            }
        }
    }
}

//Cruz
void criarCruz(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    int centro = TAMANHO_HABILIDADE / 2;
    for (int linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (int coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            // Se estiver na linha central OU na coluna central, a posição faz parte da área da cruz.
            if (linha == centro || coluna == centro) {
                matriz[linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0;
            }
        }
    }
}

//Octaedro
void criarOctaedro(int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    int centro = TAMANHO_HABILIDADE / 2;
    for (int linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (int coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            int distanciaLinha = linha - centro;
            int distanciaColuna = coluna - centro;
            // Transformamos as distâncias em valores positivos
            if (distanciaLinha < 0) {
                distanciaLinha = -distanciaLinha;
            }
            if (distanciaColuna < 0) {
                distanciaColuna = -distanciaColuna;
            }
            // Se a soma das distâncias for menor ou igual ao centro, a posição está dentro do losango.
            if (distanciaLinha + distanciaColuna <= centro) {
                matriz[linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0;
            }
        }
    }
}

//Habilidade no tabuleiro
void aplicarHabilidade(
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],
    int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE],
    int origemLinha,
    int origemColuna
) 
{
    int centro = TAMANHO_HABILIDADE / 2;

    // Percorre a matriz da habilidade
    for (int linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (int coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            // Só precisamos processar as posições marcadas com 1
            if (habilidade[linha][coluna] == 1) {
                // Converte a posição da matriz da habilidade para uma posição correspondente no tabuleiro.
                int linhaTabuleiro = origemLinha + linha - centro;
                int colunaTabuleiro = origemColuna + coluna - centro;
                // Verifica se a posição calculada está dentro dos limites do tabuleiro.
                if (linhaTabuleiro >= 0 &&
                    linhaTabuleiro < TAMANHO_TABULEIRO &&
                    colunaTabuleiro >= 0 &&
                    colunaTabuleiro < TAMANHO_TABULEIRO) {
                    // Não substitui um navio. Assim, o navio continua aparecendo no tabuleiro.
                    if (tabuleiro[linhaTabuleiro][colunaTabuleiro] == AGUA) {
                        tabuleiro[linhaTabuleiro][colunaTabuleiro] = AREA_HABILIDADE;
                    }
                }
            }
        }
    }
}

//Matriz de habilidade
void exibirHabilidade(
    int matriz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]
) 
{
    for (int linha = 0; linha < TAMANHO_HABILIDADE; linha++) {
        for (int coluna = 0; coluna < TAMANHO_HABILIDADE; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\n");
}

//Tabuleiro
void exibirTabuleiro(
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]
) 
{
    printf("\n");
    printf("       TABULEIRO BATALHA NAVAL\n\n");
    // Cabeçalho das colunas
    printf("    ");
    for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
        printf("%d ", coluna);
    }
    printf("\n");
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        // Número da linha
        printf("%d   ", linha);
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            if (tabuleiro[linha][coluna] == AGUA) {
                printf(". ");
            }
            else if (tabuleiro[linha][coluna] == NAVIO) {
                printf("N ");
            }
            else if (tabuleiro[linha][coluna] == AREA_HABILIDADE) {
                printf("* ");
            }
            else {
                printf("? ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    //Tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    // Preenche o tabuleiro inicialmente com água
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            tabuleiro[linha][coluna] = AGUA;
        }
    }

    //Matrizes de habilidade
    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];
    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE];

    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Navio horizontal
    if (posicionarNavio(tabuleiro, 2, 3, 0, 1)) {
        printf("Navio horizontal posicionado.\n");
    }

    // Navio vertical
    if (posicionarNavio(tabuleiro, 5, 7, 1, 0)) {
        printf("Navio vertical posicionado.\n");
    }

    // Navio diagonal descendente
    if (posicionarNavio(tabuleiro, 0, 0, 1, 1)) {
        printf("Navio diagonal descendente posicionado.\n");
    }

    // Navio diagonal ascendente
    if (posicionarNavio(tabuleiro, 2, 9, 1, -1)) {
        printf("Navio diagonal ascendente posicionado.\n");
    }

    //Matrizes de habilidade
    printf("\n=== MATRIZ DO CONE ===\n");
    exibirHabilidade(cone);

    printf("=== MATRIZ DA CRUZ ===\n");
    exibirHabilidade(cruz);

    printf("=== MATRIZ DO OCTAEDRO ===\n");
    exibirHabilidade(octaedro);


    int origemConeLinha = 7;
    int origemConeColuna = 2;

    int origemCruzLinha = 5;
    int origemCruzColuna = 5;

    int origemOctaedroLinha = 2;
    int origemOctaedroColuna = 7;

    aplicarHabilidade(
        tabuleiro,
        cone,
        origemConeLinha,
        origemConeColuna
    );

    aplicarHabilidade(
        tabuleiro,
        cruz,
        origemCruzLinha,
        origemCruzColuna
    );

    aplicarHabilidade(
        tabuleiro,
        octaedro,
        origemOctaedroLinha,
        origemOctaedroColuna
    );

    exibirTabuleiro(tabuleiro);

    return 0;
}
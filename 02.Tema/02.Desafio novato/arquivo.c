#include <stdio.h>

int main(){
    char cidade_1[21], estado_1[3], codigo_1[4], cidade_2[21], estado_2[3], codigo_2[4];
    int populacao_1, pontos_turisticos_1, populacao_2, pontos_turisticos_2;
    float area_1, pib_1, area_2, pib_2;

    printf("Digite os dados da primeira carta \n");

    printf("Cidade (use '_'ao inves de espacos): ");
    scanf("%20s", cidade_1);

    printf("Estado: ");
    scanf("%2s", estado_1);    
    
    printf("Codigo: ");
    scanf("%3s", codigo_1);

    printf("Populacao: ");
    scanf("%d", &populacao_1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("Area: ");
    scanf("%f", &area_1);

    printf("PIB: ");
    scanf("%f", &pib_1);

    printf("\n");

    printf("Digite os dados da segunda carta: \n");

    printf("Cidade: ");
    scanf("%20s", cidade_2);

    printf("Estado: ");
    scanf("%2s", estado_2);
    
    printf("Codigo: ");
    scanf("%3s", codigo_2);

    printf("Populacao: ");
    scanf("%d", &populacao_2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_2);

    printf("Area: ");
    scanf("%f", &area_2);

    printf("PIB: ");
    scanf("%f", &pib_2);

    printf("\n");

    printf("1 Carta \n");
    printf("Nome: %s \nEstado: %s \nCodigo: %s \n", cidade_1, estado_1, codigo_1);
    printf("Populacao: %d \nPontos turisticos: %d \n", populacao_1, pontos_turisticos_1);
    printf("Area Total: %f \nPIB: %f ", area_1, pib_1);

    printf("\n");

    printf("2 Carta \n");
    printf("Nome: %s \nEstado: %s \nCodigo: %s \n", cidade_2, estado_2, codigo_2);
    printf("Populacao: %d \nPontos turisticos: %d \n", populacao_2, pontos_turisticos_2);
    printf("Area Total: %f \nPIB: %f ", area_2, pib_2);

    return 0;
}
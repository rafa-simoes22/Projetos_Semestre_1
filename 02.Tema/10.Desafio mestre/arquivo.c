#include <stdio.h>

int main(){
    char cidade_1[21], estado_1[3], codigo_1[4], cidade_2[21], estado_2[3], codigo_2[4];
    int pontos_turisticos_1, pontos_turisticos_2, comparacao_pontos_turisticos;
    unsigned long int populacao_1, populacao_2;
    int comparacao_populacao;
    float area_1, pib_1, densidade_1, per_capta_1, super_poder_1, inverso_densidade_1, area_2, pib_2, densidade_2, per_capta_2, super_poder_2, inverso_densidade_2;
    int comparacao_area, comparacao_pib, comparacao_densidade, comparacao_per_capta, comparacao_super_poder;

    printf("Digite os dados da Carta 1\n");

    printf("Cidade (use '_'ao inves de espacos): ");
    scanf("%20s", cidade_1);

    printf("Estado: ");
    scanf("%2s", estado_1);    
    
    printf("Codigo: ");
    scanf("%3s", codigo_1);

    printf("Populacao: ");
    scanf("%lu", &populacao_1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("Area (divida as casas decimais com pontos): ");
    scanf("%f", &area_1);

    printf("PIB (divida as casas decimais com pontos): ");
    scanf("%f", &pib_1);

    densidade_1 = populacao_1 / area_1;
    per_capta_1 = (pib_1 * 1000000000) / populacao_1;

    inverso_densidade_1 = 1 / densidade_1;

    super_poder_1 = populacao_1 + pontos_turisticos_1+ area_1 + pib_1 + inverso_densidade_1 + per_capta_1;

    printf("\n\n");

    printf("Digite os dados da Carta 2\n");

    printf("Cidade: ");
    scanf("%20s", cidade_2);

    printf("Estado: ");
    scanf("%2s", estado_2);
    
    printf("Codigo: ");
    scanf("%3s", codigo_2);

    printf("Populacao: ");
    scanf("%lu", &populacao_2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_2);

    printf("Area (divida as casas decimais com pontos): ");
    scanf("%f", &area_2);

    printf("PIB (divida as casas decimais com pontos): ");
    scanf("%f", &pib_2);

    densidade_2 = populacao_2 / area_2;
    per_capta_2 = (pib_2 * 1000000000) / populacao_2;

    inverso_densidade_2 = 1 / densidade_2;

    super_poder_2 = populacao_2 + pontos_turisticos_2+ area_2 + pib_2 + inverso_densidade_2 + per_capta_2;

    printf("\n\n");

    printf("Carta 1\n");
    printf("Nome: %s \nEstado: %s \nCodigo: %s \n", cidade_1, estado_1, codigo_1);
    printf("Populacao: %lu \nPontos turisticos: %d \n", populacao_1, pontos_turisticos_1);
    printf("Area Total: %.2f km2 \nPIB: %.2f bilhoes de reais \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \n", area_1, pib_1, densidade_1, per_capta_1);
    printf("Super Poder: %.2f", super_poder_1);

    printf("\n\n");

    printf("Carta 2\n");
    printf("Nome: %s \nEstado: %s \nCodigo: %s \n", cidade_2, estado_2, codigo_2);
    printf("Populacao: %lu \nPontos turisticos: %d \n", populacao_2, pontos_turisticos_2);
    printf("Area Total: %.2f km2 \nPIB: %.2f bilhoes de reais \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \n", area_2, pib_2, densidade_2, per_capta_2);
    printf("Super Poder: %.2f", super_poder_2);

    printf("\n\n");

    comparacao_populacao = populacao_1 > populacao_2;
    comparacao_pontos_turisticos = pontos_turisticos_1 > pontos_turisticos_2;
    comparacao_area = area_1 > area_2;
    comparacao_pib = pib_1 > pib_2;
    comparacao_densidade = densidade_1 < densidade_2;
    comparacao_per_capta = per_capta_1 > per_capta_2;
    comparacao_super_poder = super_poder_1 > super_poder_2;  

    printf("Resultados\n");
    printf("Populacao: Carta %d venceu (%d)\n", comparacao_populacao ? 1 : 2, comparacao_populacao);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", comparacao_pontos_turisticos ? 1 : 2, comparacao_pontos_turisticos);
    printf("Area: Carta %d venceu (%d)\n", comparacao_area ? 1 : 2, comparacao_area);
    printf("PIB: Carta %d venceu (%d)\n", comparacao_pib ? 1 : 2, comparacao_pib);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", comparacao_densidade ? 1 : 2, comparacao_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", comparacao_per_capta ? 1 : 2, comparacao_per_capta);
    printf("Super Poder: Carta %d venceu (%d)\n", comparacao_super_poder ? 1 : 2, comparacao_super_poder);

    return 0;
}
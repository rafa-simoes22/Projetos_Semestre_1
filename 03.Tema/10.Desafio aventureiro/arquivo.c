#include <stdio.h>

int main(){
    char cidade_1[21], estado_1[3], codigo_1[4], cidade_2[21], estado_2[3], codigo_2[4];
    int pontos_turisticos_1, pontos_turisticos_2, escolha_comparacao;
    unsigned long int populacao_1, populacao_2;
    float area_1, pib_1, densidade_1, per_capta_1, area_2, pib_2, densidade_2, per_capta_2;

    printf("\n");
    
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

    printf("\n");

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

    printf("\n");

    printf("Carta 1\n");
    printf("Nome: %s \nEstado: %s \nCodigo: %s \n", cidade_1, estado_1, codigo_1);
    printf("Populacao: %lu \nPontos turisticos: %d \n", populacao_1, pontos_turisticos_1);
    printf("Area Total: %.2f km2 \nPIB: %.2f bilhoes de reais \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \n", area_1, pib_1, densidade_1, per_capta_1);

    printf("\n");

    printf("Carta 2\n");
    printf("Nome: %s \nEstado: %s \nCodigo: %s \n", cidade_2, estado_2, codigo_2);
    printf("Populacao: %lu \nPontos turisticos: %d \n", populacao_2, pontos_turisticos_2);
    printf("Area Total: %.2f km2 \nPIB: %.2f bilhoes de reais \nDensidade Populacional: %.2f \nPIB per Capita: %.2f \n", area_2, pib_2, densidade_2, per_capta_2);

    printf("\n");

    printf("Escolha um atributo a ser comparado\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - Pontos Turisticos\n");
    printf("Escolha: ");
    scanf("%d", &escolha_comparacao);
    
    switch (escolha_comparacao){
        case 1:
            printf("\nPopulacao\n");
            printf("Carta 1 - %s (%s): %lu\n", cidade_1, estado_1, populacao_1);
            printf("Carta 2 - %s (%s): %lu\n", cidade_2, estado_2, populacao_2);
            if(populacao_1 >= populacao_2){
                if(populacao_1 == populacao_2){
                    printf("Empate!\n");
                }
                else{
                    printf("Carta 1 Venceu!\n");
                }
            }
            else{
                printf("Carta 2 Venceu!\n");
            }
        break;
        case 2:
            printf("\nArea\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade_1, estado_1, area_1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade_2, estado_2, area_2);
            if(area_1 >= area_2){
                if(area_1 == area_2){
                    printf("Empate!\n");
                }
                else{
                    printf("Carta 1 Venceu!\n");
                }
            }
            else{
                printf("Carta 2 Venceu!\n");
            }
        break;
        case 3:
            printf("\nPIB\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade_1, estado_1, pib_1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade_2, estado_2, pib_2);
            if(pib_1 >= pib_2){
                if(pib_1 == pib_2){
                    printf("Empate!\n");
                }
                else{
                    printf("Carta 1 Venceu!\n");
                }
            }
            else{
                printf("Carta 2 Venceu!\n");
            }
        break;
        case 4:
            printf("\nDensidade Populacional\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade_1, estado_1, densidade_1);
            printf("Carta 2 - %s (%s): %.2f\n", cidade_2, estado_2, densidade_2);
            if(densidade_1 <= densidade_2){
                if(densidade_1 == densidade_2){
                    printf("Empate!\n");
                }
                else{
                    printf("Carta 1 Venceu!\n");
                }
            }
            else{
                printf("Carta 2 Venceu!\n");
            }
        break;
        case 5:
            printf("\nPontos Turisticos\n");
            printf("Carta 1 - %s (%s): %d\n", cidade_1, estado_1, pontos_turisticos_1);
            printf("Carta 2 - %s (%s): %d\n", cidade_2, estado_2, pontos_turisticos_2);
            if(pontos_turisticos_1 >= pontos_turisticos_2){
                if(pontos_turisticos_1 == pontos_turisticos_2){
                    printf("Empate!\n");
                }
                else{
                    printf("Carta 1 Venceu!\n");
                }
            }
            else{
                printf("Carta 2 Venceu!\n");
            }
        break;
        default:
            printf("Escolha uma opcao valida");
        break;
    }

    return 0;
}
#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoquemin = 1000;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite a umidade: ");
    scanf("%f", &umidade);

    printf("Digite o estoque: ");
    scanf("%u", &estoque);

    if(temperatura >= 30){
        printf("Tempertura alta\n");
    }
    else{
        printf("Tempertura baixa\n");
    }

    if(umidade >= 50){
        printf("Umidade alta\n");
    }
    else{
        printf("Umidade baixa\n");
    }

    if(estoque <= estoquemin){
        printf("Estoque baixo\n");
    }
    else{
        printf("Estoque normal\n");
    }

    return 0;
}
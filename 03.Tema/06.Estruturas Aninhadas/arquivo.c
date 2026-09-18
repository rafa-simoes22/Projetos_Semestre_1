#include <stdio.h>

int main(){
    int idade;
    float renda_mensal;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%f", &renda_mensal);

    /*idade > 60 ou < 18
    renda mensal < 0*/

    if(idade >= 60 || idade <= 18){
        if(renda_mensal < 2000){
            //código a ser executado se a condição for verdadeira
            printf("Possui acesso aos descontos\n");
        }
        else{
            //código a ser executado se a condição1 for falsa
            printf("Nao possui a renda mensal adequada\n");
        }
    }
    else{
        //código a ser executado se a condição for falsa
        printf("Nao possui a idade adequada\n");
    }

    return 0;
}
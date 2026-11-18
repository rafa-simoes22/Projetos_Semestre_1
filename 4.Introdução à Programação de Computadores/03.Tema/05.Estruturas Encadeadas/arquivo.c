#include <stdio.h>

int main(){
    int idade;

    printf("Digite dua idade: ");
    scanf("%d", &idade);

    /*Criança < 12
    Adolescente x >= 12, x < 18
    dulto x >= 18, x < 60
    Idoso > 60*/

    if(idade < 12){
        //código a ser executado se a condição for verdadeira
        printf("Crianca\n");
    }
    else if (idade >= 12 && idade < 18){
        //código a ser executado se a condição1 for falsa e condição2 for verdadeira
        printf("Adolecente\n");
    }
    else if (idade >= 18 && idade < 60){
        //código a ser executado se a condição2 for falsa e condição3 for verdadeira
        printf("Adulto\n");
    }
    else {
         //código a ser executado se toda as condições anteriores forem  falsas
        printf("Idoso\n");
    }
    
    return 0;
}
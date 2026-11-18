#include <stdio.h>

int main(){
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);
    
    //operação soma
    soma = num1 + num2;
    
    //operação subtração
    subtracao = num1 - num2;
    
    //operação multiplicação
    multiplicacao = num1 * num2;
    
    //operação divisão
    divisao = num1 / num2;

    //exibição dos resultados
    printf("Soma dos numeros: %d\n", soma);

    printf("Subtracao dos numeros: %d\n", subtracao);

    printf("Multiplicacao dos numeros: %d\n", multiplicacao);

    printf("Divisao dos numeros: %d\n", divisao);
}
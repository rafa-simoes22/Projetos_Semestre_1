#include <stdio.h>

int main(){
    char produtoA[30] = "A";
    char produtoB[30] = "B";
    
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminA = 500;
    unsigned int estoqueminB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    printf("O Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("O Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueminA;
    resultadoB = estoqueB > estoqueminB;

    printf("O produto %s tem estoque minimo?: %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo?: %d\n", produtoB, resultadoB);

    printf("O valor total de %s (R$ %.2f) e maior que o valor total de %s (R$ %.2f)?: %d\n", produtoA, (estoqueA * valorA), produtoB, (estoqueB * valorB), (estoqueA * valorA > estoqueB * valorB));

    return 0;
}
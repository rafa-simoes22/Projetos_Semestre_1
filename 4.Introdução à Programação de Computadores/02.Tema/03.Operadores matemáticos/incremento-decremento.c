#include <stdio.h>

int main(){
    int num1 = 1, resultado;

    printf("Valor inicial: %d\n", num1);

    //resultado = num1 e num1++ | atribuição antes do incremento
    resultado = num1++;
    printf("Apos pos-incrmento: resultado = %d | num1 = %d\n", resultado, num1);

    //num1++ e resultado = num1 | incremento antes da atribuição
    resultado = ++num1;
    printf("Apos pre-incrmento: num1 = %d | resultado = %d\n", num1, resultado);

    //resultado = num1 e num1-- | atribuição antes do decremento
    resultado = num1--;
    printf("Apos pos-decrmento: resultado = %d | num1 = %d\n", resultado, num1);

    //num1++ e resultado = num1 | decremento antes da atribuição
    resultado = --num1;
    printf("Apos pre-decrmento: num1 = %d | resultado = %d\n", num1, resultado);

    //incremento: num1 + 1 ou num1 += 1
    /*num1++;
    printf("Apos incremento: %d\n", num1);*/

    //decremento: num1 -1 ou num1 -= 1
    /*num1--;
    printf("Apos decremento: %d\n", num1);*/
}
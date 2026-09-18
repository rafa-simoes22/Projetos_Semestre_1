#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float)/*casting*/ a / b;//conversão explicita de a e b (inteiros) para flutuante
    
    printf("Quociente: %.2f\n", quociente);

    return 0;
}
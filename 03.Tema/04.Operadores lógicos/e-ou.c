#include <stdio.h>

int main(){
    int a = -10, b = 5;

    /*if(a > 0 && b > 0){
        printf("Ambos sao positivos");
    }
    else{
        printf("Pelo menos um ou  ambos sao ngativos");
    }*/

    if(a > 0 || b > 0){
        printf("Pelo menos um ou ambos sao positivos");
    }
    else{
        printf("Ambos sao ngativos");
    }
    
    return 0;
}
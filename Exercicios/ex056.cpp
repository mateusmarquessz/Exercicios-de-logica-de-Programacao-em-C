/*
Altere o programa anterior para mostrar no final a soma dos números.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, num1, num2, soma;
    printf("Digite um numero!");
        scanf("%i", &num1);
    printf("Digite outro numero!");
        scanf("%i", &num2);
    
    for(i=num1 + 1; i<num2; i++){
        printf("%i\n", i);
    }
          soma = num1 + num2;
        printf("soma:%i", soma);
}
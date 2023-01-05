/*
Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    float a,b, taxa1,taxa2;
    int anos = 0;

    printf("Diga o tamanho da populacao A");
        scanf("%f",&a);
    printf("Diga a taxa de crescimento da populacao A");
        scanf("%f",&taxa1);

    printf("Diga o tamanho da populacao B");
        scanf("%f",&b);
    printf("Diga a taxa de crescimento da populacao B");
        scanf("%f",&taxa2);
    while(1){

        anos ++;
        a *= 1 + (taxa1 /100);
        b *= 1 + (taxa2 /100);

        if(a >= b){
            printf("Demorou %d anos para a populacao de A passar ou igualar a de B.",anos);
            printf("\nA tem %.0f habitantes e B tem %.0f.", a, b);
            break;
        }
    }
}
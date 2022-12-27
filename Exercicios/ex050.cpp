/*
Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main(){
    float populacao_A, populacao_B, taxaA,taxaB;
    int anos = 0;
    printf("Diga a populacao A:");
    scanf("%f",&populacao_A );
    printf("Diga a populacao B:");
    scanf("%f",&populacao_B );
    printf("Diga taxa crescimento inicial da populacao A");
    scanf("%f", &taxaA);
    printf("Diga taxa crescimento inicial da populacao B");
    scanf("%f", &taxaB);

    while(true){
        anos ++;
        populacao_A *= 1 + (taxaA / 100);
        populacao_B *= 1 + (taxaB / 100);
         if (populacao_A >= populacao_B)
        {
            printf("Demorou %d anos para a populacao de A passar ou igualar A de B.",anos);
            printf("\nA tem %.0f habitantes e B tem %.0f.", populacao_A, populacao_B);
            break;
        }
    }
}
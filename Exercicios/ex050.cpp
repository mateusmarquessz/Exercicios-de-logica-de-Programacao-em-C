/*
Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main(){
    float populacao_A, populacao_B;
    int anos = 0;
    while (1)
    {

        anos++;
        populacao_A *= 1 + (3.0 / 100);
        populacao_B *= 1 + (1.5 / 100);
        if (populacao_A >= populacao_B)
        {
            printf("Demorou %d anos para a população de A passar ou igualar a "
                   "de B.",
                   anos);
            printf("\nA tem %.0f habitantes e B tem %.0f.", populacao_A,
                   populacao_B);
            break;
        }
    }
    return 0;
}
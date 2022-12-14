/*
Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% 
e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.

Faça um programa que calcule e escreva o número de anos necessários para que a população do país A 
ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    float a = 80000,b = 200000;
    int anos = 0;

    while(1){

        anos ++;
        a *= 1 + (3.0 /100);
        b *= 1 + (1.5 /100);

        if(a >= b){
            printf("Demorou %d anos para a populacao de A passar ou igualar a de B.",anos);
            printf("\nA tem %.0f habitantes e B tem %.0f.", a, b);
            break;
        }
    }
}


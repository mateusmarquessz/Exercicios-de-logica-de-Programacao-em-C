/*
Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um ao lado do outro.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i,x;
    x = 0;
    for(i=1; i<21; i++){
        printf("%i\n", i);
    }

    for(i=1; i<21; i++){
        printf("%i", i);
}
}
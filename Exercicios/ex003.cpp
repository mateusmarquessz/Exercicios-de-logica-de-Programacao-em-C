/*
Faça um Programa que peça dois números e imprima a soma.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float a , b, soma;
	printf("Digite um numero?");
	scanf("%f",&a);
	printf("Digite um numero?");
	scanf("%f",&b);
	soma = a + b;	
	printf("Resultado: %f", soma);
}

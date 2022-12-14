/*
Faça um Programa que converta metros para centímetros.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float a, converte;
	printf("Diga o valor em m para converter em cm \n");
	scanf("%f", &a);
	converte = a * 100;
	printf("Valor em cm: %f", converte);
}

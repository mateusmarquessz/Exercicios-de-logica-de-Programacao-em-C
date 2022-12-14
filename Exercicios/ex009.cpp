/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. 
C = (5 * (F-32) / 9).
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float faren,cel;
	printf("Diga o valor dos Graus em Farenheit:");
	scanf("%f", &faren);
	cel = 5 * (faren - 32) / 9;
	printf("O valor em Celsius: %f", cel);
	return 0;
}

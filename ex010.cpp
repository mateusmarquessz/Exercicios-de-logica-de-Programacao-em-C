/*
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float cel, faren;
	printf("Diga o valor em Celsius");
	scanf("%f", &cel);
	faren = (cel * 9/5) + 32;
	printf("O valor de Celsisu para fahrenheit: %f", faren);
	return 0;
}

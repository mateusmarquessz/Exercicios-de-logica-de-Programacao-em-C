/*
Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	int raio, area;
	printf("Diga a area do Circulo:");
	scanf("%f", &raio);
	area = M_PI * pow(raio, 2);
	printf("A area e: %f", area);
	return 0;
}

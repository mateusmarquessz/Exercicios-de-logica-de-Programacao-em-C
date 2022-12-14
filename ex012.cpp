/*
Tendo como dados de entrada a altura de uma pessoa. 
Construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float altura, pesoI;
	printf("Digite sua altura:");
	scanf("%f", &altura);
	pesoI= (72.7*altura) - 58;
	printf("Seu peso ideal eh: %f", pesoI);
	return 0;
}

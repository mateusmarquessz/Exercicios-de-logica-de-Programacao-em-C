/*
Faça um Programa que peça as 4 notas bimestrais e mostre a média.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float a , b, c, d, media;
	printf("Digite sua nota do 1 bimestre\n");
	scanf("%f",&a);
	printf("Digite sua nota do 2 bimestre\n");
	scanf("%f",&b);
	printf("Digite sua nota do 3 bimestre\n");
	scanf("%f",&c);
	printf("Digite sua nota do 4 bimestre\n");
	scanf("%f",&d);
	media = (a + b + c + d) /4;	
	printf("Resultado: %f", media);
}

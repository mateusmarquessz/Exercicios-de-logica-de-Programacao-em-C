/*
Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: 
o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	int num1, num2;
	float a, b, c, num3;
	printf("Digite um numero inteiro");
	scanf("%d", &num1);
	printf("Digite outro numero inteiro");
	scanf("%d", &num2);
	printf("Digite um numero real");
	scanf("%f", &num3);
	
	a = (num1 * 2) + (num2 /2);
	b = (num1 * 3) + num3;
	c = (num3 * 3);
	
	printf("a = %f \n b = %f \n c = %f", a, b,c);
	
	
		
}

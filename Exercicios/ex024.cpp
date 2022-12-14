/*
Faça um Programa que leia três números e mostre o maior deles.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float num1,num2,num3;
		printf("Digite um numero");
	scanf("%f", &num1);
		printf("Digite um numero");
	scanf("%f", &num2);
		printf("Digite um numero");
	scanf("%f", &num3);
	if(num1 > num2 && num1 > num3){
		printf("O maior numero digital foi: %f", num1);
	} else if (num2 > num1 && num2 > num3){
		printf("O maior numero digital foi: %f", num2);
	} else {
		printf("O maior numero digital foi: %f", num3);
	}
	if(num1 < num2 && num1 < num3){
		printf("O menor numero digital foi: %f", num1);
	} else if (num2 < num1 && num2 < num3){
		printf("O menor numero digital foi: %f", num2);
	} else {
		printf("O menor numero digital foi: %f", num3);
	}
	
}








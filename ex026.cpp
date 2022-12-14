/*
Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, 
sabendo que a decisão é sempre pelo mais barato.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float prod1,prod2,prod3;
	printf("Diga o preco do primeiro produto");
	scanf("%f", &prod1);
	printf("Diga o preco do segundo produto");
	scanf("%f", &prod2);
	printf("Diga o preco do terceiro produto");
	scanf("%f", &prod3); 
	if(prod1< prod2 && prod1< prod3){
		printf("Compre o primeiro produto");
		} else if(prod2< prod1 && prod2< prod3){
			printf("Compre o segundo produto");
		}
		else{
			printf("Compre o terceiro produto");
		}
}


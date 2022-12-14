/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float salario, hora, total;
	printf("Quanto voce ganha por hora?");
	scanf("%f", &salario);	
	printf("Quanto horas voce trabalhou este mes?");
	scanf("%f", &hora);
	total = salario * hora;
	printf("Voce ganha no mes: %f", total);	
	return 0;
}

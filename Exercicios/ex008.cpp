/*
Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.
Calcule e mostre o total do seu sal�rio no referido m�s.
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

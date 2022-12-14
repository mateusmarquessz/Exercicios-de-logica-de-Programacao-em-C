/*
As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe 
contrataram para desenvolver o programa que calculará os reajustes.
Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:

salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado,
informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float salario, soma, percentual, aumento, reajuste;
	printf("Diga o seu salario para o reajuste");
	scanf("%f", &salario);
	if(reajuste = 280){
		soma = salario * 0.20;
		percentual = 0.20 * 100;
		aumento = salario + soma;
	} else if (reajuste > 280 || reajuste <= 700){
		soma = salario * 0.15;
		percentual = 0.15 * 100;
		aumento = salario + soma;
	} else if (reajuste > 700 || reajuste <= 1500){
		soma = salario * 0.10;
		percentual = 0.10 * 100;
		aumento = salario + soma;
	} else {
		soma = salario * 0.05;
		percentual = 0.05 * 100;
		aumento = salario + soma;
	}
	printf("o salario antes do reajuste:%f \n", salario);
	printf("o percentual de aumento aplicado:%f \n",percentual);
	printf("o valor do aumento:%f \n", soma);
	printf("o novo salario, apos o aumento :%f", aumento);
}










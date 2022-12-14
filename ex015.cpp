/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, 
sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, 
Faça um programa que nos dê: 
salário bruto. 
quanto pagou ao INSS. 
quanto pagou ao sindicato. 
o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float salario, hora, bruto, ir, inss, sindicato, liquido;	
	printf("Quanto voce ganha por hora?");
	scanf("%f", &salario);
	printf("Quanto horas voce trabalha?");
	scanf("%f", &hora);	
	bruto = hora * salario;
	ir = bruto * 0.11;
	inss = ir * 0.08;
	sindicato = inss * 0.05;
	liquido = bruto - ir - inss - sindicato;
	
	printf("Seu salario bruto e:%f \n", bruto);
	printf("Desconto do ir: %f\n", ir);
	printf("Desconto do inss: %f\n", inss);
	printf("Desconto do sindicato: %f\n", sindicato);
	printf("Salario liquido total: %f\n", liquido);
		
}

/*
Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.

Calcule e mostre o total do seu sal�rio no referido m�s, 
sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, 
Fa�a um programa que nos d�: 
sal�rio bruto. 
quanto pagou ao INSS. 
quanto pagou ao sindicato. 
o sal�rio l�quido. calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
+ Sal�rio Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Sal�rio Liquido : R$
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

/*
Fa�a um programa para o c�lculo de uma folha de pagamento, sabendo que os descontos s�o do Imposto de Renda, 
que depende do sal�rio bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Sal�rio Bruto, 
mas n�o � descontado (� a empresa que deposita).
O Sal�rio L�quido corresponde ao Sal�rio Bruto menos os descontos. 
O programa dever� pedir ao usu�rio o valor da sua hora e a quantidade de horas trabalhadas no m�s.

Desconto do IR: Sal�rio Bruto at� 900 (inclusive) -isento 
Sal�rio Bruto at� 1500 (inclusive) - desconto de 5% Sal�rio Bruto 
at� 2500 (inclusive) - desconto de 10%
Sal�rio Bruto acima de 2500 - desconto de 20%

Imprima na tela as informa��es, dispostas conforme o exemplo abaixo. 
No exemplo o valor da hora � 5 e a quantidade de hora � 220.

    Sal�rio Bruto: (5 * 220)        : R$ 1100,00
    (-) IR (5%)                     : R$   55,00
    (-) INSS ( 10%)                 : R$  110,00
    FGTS (11%)                      : R$  121,00
    Total de descontos              : R$  165,00
    Sal�rio Liquido                 : R$  935,00
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float Valorhora, 
	Quantidadehora, 
	salarioBruto, 
	DescontoIR,
	DescontoINSS,
	DecontoFGTS,
	TotaldeDescontos, 
	salarioLiquido;
	
	
		printf("Qual valor da sua hora trabalhada?");
	scanf("%f",&Valorhora);
		printf("Qual quantidade de horas trabalhadas no mes?");
	scanf("%f",&Quantidadehora);
	salarioBruto = Valorhora * 	Quantidadehora;
	if(salarioBruto<=900){
		DescontoIR = 0.0;
	} else if(salarioBruto<=1500){
		DescontoIR = 5;
	} else if (salarioBruto<=2500) {
		DescontoIR = 10;
	} else {
		DescontoIR = 15;
	}
	DescontoIR = salarioBruto * (DescontoIR / 100);
	DescontoINSS = salarioBruto * (10 / 100.0);
	DecontoFGTS =salarioBruto * (11 /100.0);
	TotaldeDescontos = DescontoIR + DescontoINSS;
	salarioLiquido = salarioBruto - TotaldeDescontos;
	
	printf(" Sal�rio Bruto:%f \n",salarioBruto);
	printf(" (-)IR (5%):%f \n",DescontoIR);
	printf(" (-)INSS (10%):%f\n",DescontoINSS);
	printf(" FGTS (11%):%f \n",DecontoFGTS);
	printf(" Total de descontos:%f \n",TotaldeDescontos);
	printf(" Salario Liquido:%f \n",salarioLiquido);
	
	
	
	
	
	
}

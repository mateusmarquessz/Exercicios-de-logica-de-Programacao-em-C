/*
Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho.

Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos) 
deve pagar uma multa de R$ 4,00 por quilo excedente.

Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule o excesso.

Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa o valor da multa que Jo�o dever� pagar. 
Imprima os dados do programa com as mensagens adequadas.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float peso, excesso;
	printf("Diga a quantidade de peixe que voce pegou");
	scanf("%f", &peso);
	if (peso > 50){
			excesso = peso - 50;
			excesso *= 4;
			printf("O valor pago de excesso foi: %f", excesso);
	} else {
		printf("Nao teve excesso");	
		}
}

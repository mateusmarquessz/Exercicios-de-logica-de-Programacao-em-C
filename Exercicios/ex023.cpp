/*
Fa�a um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a m�dia alcan�ada por aluno e apresentar: 
A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete; 
A mensagem "Reprovado", se a m�dia for menor do que sete; 
A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float notas1,notas2;
	printf("Digite sua nota no 1 bimestre");
	scanf("%f", &notas1);
		printf("Digite sua nota no 2 bimestre");
	scanf("%f", &notas2);
	if(notas1 + notas2 >= 10){
		printf("Voce foi aprovado com Distincao");
	} else if (notas1 + notas2 > 7){
		printf("Voce foi aprovado");
	} else {
		printf("Voce nao foi aprovado");
	}
}

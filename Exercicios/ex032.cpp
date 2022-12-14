/*
Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo: 
Média de Aproveitamento Conceito Entre 
9.0 e 10.0 A 
Entre 7.5 e 9.0 B 
Entre 6.0 e 7.5 C 
Entre 4.0 e 6.0 D 
Entre 4.0 e zero E

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” 
se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.

*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float nota1,nota2, media, notatotal;
	char conceito;
		printf("Digite sua nota do primeiro semetre");
	scanf("%f", &nota1);
		printf("Digite Sua nota do segundo semetre");
	scanf("%f", &nota2);
	notatotal = nota1 + nota2;
	media = notatotal / 2;
	if (media >=9){
		conceito = 'A';
	}else if (media >= 7.5 ){
			conceito = 'B';
	}else if (media >= 6.0 ){
			conceito = 'C';
	}else if (media >= 4.0 ){
			conceito = 'D';
	}else {
		conceito = 'E';
	}
 		 if (conceito == 'D' || conceito == 'E')
        	printf("REPROVADO\nAproveitamento: %c \n", conceito);
    else
        printf("APROVADO\nAproveitamento: %c \n", conceito);
        printf("Nota %f \n media: %f", notatotal, media);
}







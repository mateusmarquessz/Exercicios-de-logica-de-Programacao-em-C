/*
Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	char turno;
	printf("Qual turno voce estuda, M-matutino, V-Vespertino, N-Noturno.\n");
	scanf("%c", &turno);
	if(turno == 'M' || turno == 'm' ){
		printf("Bom Dia!");
	} else if (turno == 'V' || turno == 'v'){
		printf("Boa Tarde!");
	}else if (turno == 'N'|| turno == 'n'){
		printf("Boa noite!");
	} else{
		printf("Valor invalido");
	}
}

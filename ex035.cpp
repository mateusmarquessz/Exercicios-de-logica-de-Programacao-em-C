/*
Fa�a um Programa que pe�a um n�mero correspondente a um determinado ano e em seguida informe se este ano � ou n�o bissexto.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	int ano;
	printf("Diga um ano");
	scanf("%i", &ano);
	if (ano %4 == 0 ) {
		printf("E bissexto");	
		} else {
			printf("Nao e bissexto");
		}
}

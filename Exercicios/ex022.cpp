/*
Fa�a um Programa que verifique se uma letra digitada � vogal ou consoante.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	printf("Digite uma letra");
	scanf("%c", &letra);
	if(letra =='a, e , i, o, u' || letra =='A, E , I, O, U'){
		printf("Essa letra � uma vogal");
	} else{
		printf("Essa letra n�o � uma vogal");
	}
}

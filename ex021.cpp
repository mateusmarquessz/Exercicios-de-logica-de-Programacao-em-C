/*
Fa�a um Programa que verifique se uma letra digitada � "F" ou "M". 
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	char nome;
	printf("Digite F para feminino e M para masculino");
	scanf("%c",&nome);
	if(nome == 'F' || nome == 'f'){
		printf("Feminino");
	}else if (nome == 'M' || nome == 'm'){
		printf("Masculino");
	} else {
		printf("Sexo invalido");
	}
}

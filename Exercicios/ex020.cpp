/*
Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	int a;
	printf("Diga um valor:");
	scanf("%d", &a);
	if(a >= 1){
		printf("valor digitado e positivo");
	} else {
		printf("valor digitado negativo");
	}
}

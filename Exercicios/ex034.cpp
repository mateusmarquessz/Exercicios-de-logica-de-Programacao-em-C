/*
Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax² + bx + c.

O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:

Se o usuário informar o valor de A igual a zero, a equação não é do segundo
    grau e o programa não deve fazer pedir os demais valores,
    sendo encerrado;
Se o delta calculado for negativo, a equação não possui raízes reais.
    Informe ao usuário e encerre o programa;
Se o delta calculado for igual a zero a equação possui apenas uma raiz
    real; informe-a ao usuário;
Se o delta for positivo, a equação possui duas raiz reais;
    informe-as ao usuário;
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
	float a,b,c,delta;
		printf("Diga o valor de A:");
	scanf("%f", &a);
	if(a == 0){
		printf("a equacao nao e do segundo grau e o programa sera encerrado");
		} else {
		printf("Diga o valor de B:");
	scanf("%f",&b);
		printf("Diga o valor de C:");
	scanf("%f",&c);	
	delta = (b*2) - (4 * a * c);
		} 
		
		if (delta < 0){
				printf("a equação nao possui raizes reais");
		} else if (delta = 0) {
			printf("possui apenas uma raiz real");
		} else if (delta > 0 ){
			printf("A equação possui duas raiz reais");
		}
}

/*
Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax� + bx + c.

O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao usu�rio nas seguintes situa��es:

Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo
    grau e o programa n�o deve fazer pedir os demais valores,
    sendo encerrado;
Se o delta calculado for negativo, a equa��o n�o possui ra�zes reais.
    Informe ao usu�rio e encerre o programa;
Se o delta calculado for igual a zero a equa��o possui apenas uma raiz
    real; informe-a ao usu�rio;
Se o delta for positivo, a equa��o possui duas raiz reais;
    informe-as ao usu�rio;
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
				printf("a equa��o nao possui raizes reais");
		} else if (delta = 0) {
			printf("possui apenas uma raiz real");
		} else if (delta > 0 ){
			printf("A equa��o possui duas raiz reais");
		}
}

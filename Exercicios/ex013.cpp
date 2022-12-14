/*
Tendo como dado de entrada a altura (h) de uma pessoa.
Construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: 
Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float homem, mulher, altura;
	printf("Fale sua altura:");
	scanf("%f", &altura);
	homem = (72.7*altura) - 58;
	mulher = (62.1*altura) - 44.7;
	printf("Se voce for homem seu peso ideal eh:%f se voce for mulher:%f", homem, mulher);
}

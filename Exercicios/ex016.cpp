/*
Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, 
que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float areaPintada;
	printf("Escrava quantos metros quadrado sera pintado");
	scanf("%f", &areaPintada);
	areaPintada = areaPintada / 3;
	areaPintada = areaPintada / 18;
	areaPintada = ceil(areaPintada);
	printf("A quantidade de latas de tinta que voce ira usar eh %f, e ira gastar %f", areaPintada,areaPintada*80);
}

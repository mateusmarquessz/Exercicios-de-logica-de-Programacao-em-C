/*
Fa�a um Programa para uma loja de tintas.

O programa dever� pedir o tamanho em metros quadrados da �rea a ser pintada.

Considere que a cobertura da tinta � de 1 litro para cada 6 metros quadrados e que a tinta � vendida em latas de 18 litros, 
que custam R$ 80,00 ou em gal�es de 3,6 litros, que custam R$ 25,00.

Informe ao usu�rio as quantidades de tinta a serem compradas e os respectivos pre�os em 3 situa��es:

comprar apenas latas de 18 litros;
comprar apenas gal�es de 3,6 litros;
misturar latas e gal�es, de forma que o pre�o seja o menor.
    Acrescente 10% de folga e sempre arredonde os valores para cima,
    isto �, considere latas cheias.

*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float areaPintada, galoes;
	printf("Escrava quantos metros quadrado sera pintado");
	scanf("%f", &areaPintada);
	areaPintada = areaPintada / 6;
	areaPintada = areaPintada / 18;
	areaPintada = ceil(areaPintada);
	galoes = areaPintada / 3.6;
	printf("A quantidade de latas de tinta que voce ira usar eh %f, e ira gastar %f \n", areaPintada,areaPintada*80);
	printf("A quantidade de galoes de tinta que voce ira usar eh %f, e ira gastar %f", galoes,galoes*25);
}


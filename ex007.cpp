/*
Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float area, dobro, lado;
	printf("Digite o lado do quadrado:");
	scanf("%f", &lado);
	area = pow(lado, 2);
	dobro = area * 2;
	printf("O dobro da area do quadro eh: %f", dobro, lado);
	return 0;
}

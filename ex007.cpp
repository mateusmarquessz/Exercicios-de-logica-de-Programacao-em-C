/*
Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
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

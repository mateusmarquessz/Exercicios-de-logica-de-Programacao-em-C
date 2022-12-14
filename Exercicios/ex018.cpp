/*
Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), 
calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	float TamanhoArquivo, VelocidadeIt, Resultado;
	printf("Diga o tamanho do arquivo em MB");
	scanf("%f", &TamanhoArquivo);
	printf("Diga a velocidade de internet em Mbps");
	scanf("%f", &VelocidadeIt);
	TamanhoArquivo = VelocidadeIt * 8;
	Resultado = TamanhoArquivo / VelocidadeIt;
	printf("A velocidade de download eh %f", Resultado);
}

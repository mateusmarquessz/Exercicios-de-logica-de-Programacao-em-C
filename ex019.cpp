/*
Estruturas de decis�o
Fa�a um Programa que pe�a dois n�meros e imprima o maior deles.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main(){
	int a, b;
	printf("diga um numero");
	scanf("%d",&a);
	printf("diga outro numero");
	scanf("%d",&b);
	
	if(a > b){
		printf("%d", a);
	} else{
		printf("%d", b);
	}
}

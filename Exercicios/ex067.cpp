/*
Faça um programa que mostre todos os primos entre 1 e N sendo N um número inteiro fornecido pelo usuário.

O programa deverá mostrar também o número de divisões que ele executou para encontrar os números primos.

Serão avaliados o funcionamento, o estilo e o número de testes (divisões) executados.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>


int main(){
    int i, n;
    bool primo;
    printf("Digite a quantidade de numeros que deseja");
    scanf("%i", &n);

    for (i = 0; i < n; i++){
         if (n % i == 0)
        {
            primo = false;
            printf("\n%d não é primo! É divisível por %d.", n, i);
        }
    }
    
}
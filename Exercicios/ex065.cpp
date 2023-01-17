/*
Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i,n;
    bool primo;
    printf("Diga um numero inteiro");
    scanf("%i", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            primo = false;
            printf("%d não é primo!", n);
            break;
        }
    }
    if (primo)
        printf("%d é primo!", n);
    return 0;
}
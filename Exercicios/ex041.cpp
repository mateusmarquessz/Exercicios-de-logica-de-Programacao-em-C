/*
Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar.

O resultado da operação deve ser acompanhado de uma frase que diga se o número é: par ou ímpar; positivo ou negativo; inteiro ou decimal.
*/

#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main(){
    int aux;
    float num1, num2, resultado;
    char op;
        printf("Diga um valor");
    scanf("%f", &num1);
        printf("Diga um valor");
    scanf("%f", &num2);
          printf("Diga qual operacao (+, -, * ou /) voce deseja usar");
    scanf("%s", &op);

    if(op == '+'){
        resultado =num1 + num2;
    } else  if (op == '-') {
        resultado =num1 - num2;
    }  else  if (op == '/' ) {
        resultado =num1 / num2;
    }  else  if (op == '*') {
        resultado =num1 * num2;
    }
    printf("Resultado = %f \n", resultado);

    
 if((int)resultado % 2 == 0){
        printf("Par \n");
    } else {
        printf("Impar \n");
    }

    if(resultado >= 0){
        printf("Positivo\n");
    } else {
        printf("Negativo\n");
    }
    aux = resultado;
    if(aux == resultado){
        printf("Valor inteiro\n");
    } else {
        printf("Valor decimal\n");
    }
}
/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
    Álcool:
        até 20 litros, desconto de 3% por litro
        acima de 20 litros, desconto de 5% por litro
    Gasolina:
        até 20 litros, desconto de 4% por litro
        acima de 20 litros, desconto de 6% por litro
Escreva um algoritmo que leia o número de litros vendidos,
o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina),
calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do
litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.
*/

#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    float litros, preco;
    char combustivel;
        printf("Diga a quantidade de litros comprados!");
    scanf("%f", &litros);

       printf("Qual combustivel, A-alcool, G-gasolina");
    scanf("%s", &combustivel);
    getchar();

    if(combustivel == 'A' || combustivel == 'a'){
            preco = litros * 1.9;
    } else if(combustivel == 'G' || combustivel == 'g'){
            preco = litros * 2.5;
        }
 

    if(litros < 20){
         printf("valor a ser pago %f", preco);
    } else if (litros = 20){
        preco -= 1.9 * litros * 3 / 100.0;
        printf("valor a ser pago %f", preco);
    } else {
        preco -= 1.9 * litros * 5 / 100.0;
        printf("valor a ser pago %f", preco);
    }
     if(litros < 20){
         printf("valor a ser pago %f", preco);
    } else if (litros = 20){
        preco -= 2.5 * litros * 4 / 100.0;
        printf("valor a ser pago %f", preco);
    } else {
        preco -= 2.5 * litros * 6 / 100.0;
        printf("valor a ser pago %f", preco);
    }
}
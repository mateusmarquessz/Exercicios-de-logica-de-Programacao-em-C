/*
Uma fruteira está vendendo frutas com a seguinte tabela de preços:
                      Até 5 Kg           Acima de 5 Kg
Morango         R$ 2,50 por Kg          R$ 2,20 por Kg
Maçã            R$ 1,80 por Kg          R$ 1,50 por Kg
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra
ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total.
Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade
(em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
*/

#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    float morango, macas, preco, precoD;
        printf("Diga a quantidade em Kg de morangos");
    scanf("%f", &morango);
        printf("Diga a quantidade em Kg de maca");
    getchar();
    scanf("%f", &macas);

    if(morango <= 5){
        preco = 2.50;
        preco = preco * morango;
        printf("O valor pago nos morangos e: %f\n", preco);
    } else {
        preco = 2.20;
        preco = preco * morango;
        printf("O valor pago nos morangos e: %f\n", preco);
    }

    if(macas <= 5){
        preco = 1.80;
        preco = preco * macas;
        printf("O valor pago nas macas e: %f \n", preco);
    } else {
        preco = 1.50;
        preco = preco * macas;
        printf("O valor pago nas macas e: %f\n", preco);
    }

    if((morango + macas) > 8 || preco > 25){
        preco  -= preco * 10 / 100;
        printf("O valor total a ser pago com Desconto de 10 porcento e: %f", preco);
    }
}
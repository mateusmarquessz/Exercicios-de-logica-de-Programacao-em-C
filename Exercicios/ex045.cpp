/*
O Hipermercado Tabajara está com uma promoção de carnes que é imperdível.
Confira:
                      Até 5 Kg           Acima de 5 Kg
File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg
Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos
de carne da promoção, porém não há limites para a quantidade de carne
por cliente.
Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de
5% sobre o total da compra.
Escreva um programa que peça o tipo e a quantidade de carne comprada pelo
usuário e gere um cupom fiscal, contendo as informações da compra:
    tipo de carne
    quantidade de carne
    preço total
    tipo de pagamento
    valor do desconto
    valor a pagar.
*/

#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    char carne, pagamento;
    float quantidade, preco, precoTotal;
    printf("Diga o tipo de carne! A-Alcatra, P-Picanha, F-File Duplo");
    scanf("%s", &carne);
    printf("Diga a quantidade de carne em KG!");
    scanf("%f", &quantidade);
    getchar();
    printf("Dinheiro ou cartao tabajara (5 porcento de desconto)? D ou C: ");
    scanf("%s", &pagamento);
    getchar();

    if(carne == 'A' || carne == 'a'){
        preco = 5.90;
    }else if(carne == 'P' || carne == 'p'){
        preco = 6.90;
    } else {
        preco = 4.90;
    }
    precoTotal = preco * quantidade;
    if(carne > 5){
        preco = preco + 1;
    } else {
        preco = preco;
    }

    if(pagamento == 'C' || pagamento == 'c'){
        precoTotal = preco / 100 * 5;
    } else{
        precoTotal = precoTotal;
    }

    printf("tipo de carne %s \n", carne);
    printf("quantidade de carne %f\n", quantidade);
    printf("Preco total: %f\n", preco);
    printf("Tipo de pagamento: %s\n", pagamento);
    printf("valor do desconto %f\n");
    printf("valor a pagar: %f", precoTotal);
}
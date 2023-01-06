/*
Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo: Tabuada de 5: 5 X 1 = 5 5 X 2 = 10 ... 5 X 10 = 50
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main(){
    int i, x, mult;
    printf("Digite o numero para tabuada");
    scanf("%i", &x);

    for(i=1; i<11; i++){
        mult = x * i;
        printf("%i X %i = %i\n", x,i,mult);
    }
}
/*Codifique um programa que indique a quantidade mínima de cédulas equivalente a umadada quantia.
Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.*/

#include <stdio.h>

int main(){
    int valor,total,quant,quantotal;
    printf("digite o numero desejado: ");
    scanf("%d",&valor);
    total = valor;
    quant = 100;
    quantotal = 0;

    while (1){
        if (total >= quant){
            total-= quant;
            quantotal += 1;
        }else{
            printf("o total de cedulas foi de %d de r$ %d\n",quantotal,quant);
            if(quant ==100){
                quant = 50;
            }else if (quant == 50){
                quant = 20;
            }else if (quant == 20) {
                quant = 10;

            }else if (quant ==10){
                quant = 5;
            }else if(quant == 5){
                quant =1;
            }
            quantotal = 0;
            if (total == 0){
                break;
            }
        }
    }
}
/*A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)},
 em que Tcé a temperatura em Celsius e Tf em Fahrenheit.
 Faça um programa C que calcule e queimprima uma tabela de graus Fahrenheit e graus Celsius,
 cujos graus variem de 40 a 75, de1 em 1. */

#include <stdio.h>

int main()
{
    float Celsius;
    printf("Fahrenheit  |  Celsius\n");
    printf("------------|-----------\n");
    
	for(float i = 40;i <=75; i++){
       Celsius=((i-32)*5)/9;
       printf("%.3f      |     %.3f\n",i,Celsius);
    }
}
/*Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin:*/

#include <stdio.h>

int main () {

    int temp, celsius, kelvin,num; 
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%d", &temp);

    celsius = (temp -32) *5/9 ; 
    kelvin = (temp -32) *5/9 +273;
    
    printf("O valor da temperatura em Celsius e: %d",celsius);
    printf("\nO valor da temperatura em Kelvin e: %d",kelvin);


}
/*Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se elefor menor que 100 e em 20% se ele for maior ou igual a 100. 
OBS: não use o comando "if"ou o operador de condição "?".*/

#include <stdio.h>

int main()
{

    int valor, inflacao;
    printf("digite o valor do produto: ");
    scanf("%d",&valor);


    for(int i=0;i<1 && 100>valor;i++){
        inflacao = valor+(valor*0.1);
    }

    for(int i=0;i<1 && 100<=valor;i++){
        inflacao = valor+(valor*0.2);
    }

    printf("%d",inflacao);
    return 0;
}
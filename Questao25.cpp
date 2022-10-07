/*Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dosvalores é igual a média dos mesmos.*/

#include <stdio.h>
int main(){
    int num[10],soma=0,media;

    for(int i = 0; i<10;i++){
        printf("digite um numero: ");
        scanf("%d",&num[i]);

        soma += num[i];

        }
    media = soma /10;
    for(int i = 0; i<10;i++){
        if(media == num[i]){
            printf("o numero %d e igual a media",i);
        }
    }
}
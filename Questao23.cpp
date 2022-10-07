/*Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazeneem um vetor,
depois o programa deverá apresentar na tela os números na ordem inversa doqual foram digitados.*/

#include <stdio.h>

int main(){
    int num[6],soma=0,subtr=0;

    for(int i = 0; i<6;i++){
        printf("digite um numero: ");
        scanf("%d",&num[i]);
        }


    printf("[");
    for(int i = 5; i>0;i--){
        printf("%d,",num[i]);
    }
    printf("%d]",num[0]);

}
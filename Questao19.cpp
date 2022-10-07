/*Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo inteiro.*/

#include <stdio.h>
#define Tarray 5
int main(){
     int num[Tarray];
     int maior,menor;

     for (int i = 0; i<Tarray; ++i){
        printf("digite um numero: ",i);
        scanf("%d",&num[i]);
        fflush(stdin);

        if(i == 0){
            menor =num[0];
            maior = num[0];

        }else if( maior < num[i]){
            maior=  num[i];
        }
        if(menor > num[i]){
            menor = num[i];

        }
     }

     printf("O maior elemento do vetor e: %d\n",maior);
     printf("A menor elemento do vetor e: %d",menor);

}
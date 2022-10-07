/*Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene essesdez números em um vetor. Para os valores dos elementos inseridos nas posições pares dessevetor,
calcule o somatório deles, para os demais calcule a subtração desses valores. Emseguida, o programa deverá apresentar na tela os resultados.*/

#include <stdio.h>

int main(){
    int n[10],soma=0,sub=0;

    for(int i = 0; i<10;i++){
        printf("Digite um numero inteiro: ");
        scanf("%d",&n[i]);


        if(i%2 == 0){
            soma += n[i];
        }else{
            sub -= n[i];

        }
    }
    printf("A soma e %d e a subtracao e %d",soma,sub);
}
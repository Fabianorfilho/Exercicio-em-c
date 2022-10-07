/*Faça um programa C que leia dez números que representam as notas de dez alunos deuma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assumaque as notas são informadas corretamente no intervalo de 1 a 10.*/

#include <stdio.h>
#include <string.h>
#define Tarray 10

int main(){
     float n,n2,soma,media;
     float maior,menor;
     char nome1[40],nome2[40];
     char nome[10];

     for (int i = 0; i<Tarray; ++i){
        
		printf("digite o seu nome: ");
        gets(nome);
        printf("digite sua primeira nota: ");
        scanf("%f",&n);
        printf("Digite sua segunda nota: ");
        scanf("%f",&n2);

        soma = n+n2;
        media = soma /2;

        fflush(stdin);
        printf("\n\n");

        if(i == 0){
            menor = media;
            maior = media;
            strcpy (nome2, nome);
            strcpy (nome1, nome);
        }else if( maior < media){
            maior =  media;
            strcpy (nome1, nome);
        }else if(menor > media){
            menor = media;
            strcpy (nome2, nome);
        }
     }
     
     printf("A media da maior nota e %.1f o nome do(a) aluno(a) e: %s\n",maior,nome1);
     printf("A media da menor nota e %.1f o nome do(a) aluno(a) e: %s",menor,nome2);
}
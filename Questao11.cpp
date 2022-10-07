/*Codifique um programa que leia a quantidade de alunas e de alunos. Depois esseprograma deve informar se essa turma possui mais alunos ou mais alunas.
Se essa turmapossuir a quantidade de alunas maior que a de alunos,
informe o total de alunos dessa turma.O programa deve verificar se a quantidade de alunos é igual a de alunas*/

#include <stdio.h>

int main(){
    int m,f,total=0;


    printf("Digite a quantidade de alunos: ");
    scanf("%d",&m);
    printf("Digite a quantidade de alunas: ");
    scanf("%d",&f);

    if (m > f){
        printf("Nessa sala existem mais alunos");
    }
    if (f > m){
    	printf("nessa sala existem mais alunas");
        total = m + f;
        printf("\nO total de alunos dessa turma e de: %d",total);
    }
    if(m == f){
        printf("\nA sala possui a mesma quantidade de alunos e alunas");
    }
}
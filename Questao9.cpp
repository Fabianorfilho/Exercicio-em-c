/*Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dosexercícios realizados por ele.
Calcular a média de aproveitamento, usando a fórmula: MA =(N1 + N2*2 + N3*3 + ME)/7.
A partir da média, informar o conceito de acordo com a tabela
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	
   float n1, n2, n3, me, ma;
   
   printf("Digite a primeira nota: ");
   scanf("%f", &n1);
   
   printf("Digite a segunda nota: ");
   scanf("%f", &n2);
   
   printf("Digite a terceira nota: ");
   scanf("%f", &n3);
   
   printf("Digite a media dos exercicios: ");
   scanf("%f", &me);
   
   ma = (n1 + n2 + n3 + me)/7.0;
   
   if(ma>=9)
   {
       printf("A");
   }
   else if(ma>=7.5)
   {
       printf("B");
   }
   else if(ma>=6)
   {
       printf("C");
   }
   else if(ma>=4)
   {
       printf("D");
   }
   else
   {
       printf("E");
   }
   printf("\n");
   
   return 0;
}
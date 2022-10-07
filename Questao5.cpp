/*Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)para os códigos de 0 a 127.*/

#include <stdio.h>
#include <iostream>

int main(){
   int i=0;
   
   for(i=0;i<127;i++)
		printf("Decimal: %i Hexadecimal: %x Caractere: %c \n",i,i,i);
}
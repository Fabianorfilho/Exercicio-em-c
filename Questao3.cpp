/*Escreva um programa que leia um número na base decimal e em seguida imprima essemesmo número nas bases octal e hexadecimal*/

#include <stdio.h>

int main(){
	
	int i;
	
	printf("Digite um valor em decimal: ");
	scanf("%d",&i);
	
	printf("\n%d em Octal: %o",i,i);
	printf("\n%d em hexadecimal: %X",i,i);
	
}
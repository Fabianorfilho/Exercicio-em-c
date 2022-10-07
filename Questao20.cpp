/*Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética*/

#include <stdio.h>
#include <string.h>

char nome[2][80];

void ordenar(){
	int x,y,r;
	char auxiliar[80];
	
	for(x = 0;x <=1; x++){
		for(y = x+1;y<=1;y++){
			r = strcmp(nome[x],nome[y]);
			if(r > 0){
				strcpy(auxiliar,nome[x]);
				strcpy(nome[x],nome[y]);
				strcpy(nome[y],auxiliar);
			}
		}
	}
}

int main(){
	int x;
	
	printf("Digite 2 nomes nome: ");
	for(x=0;x<=1;x++){
		gets(nome[x]);
	}
	ordenar();
	
	printf("Nomes ordenados: \n");
	for(x=0;x<=1;x++){
		puts(nome[x]);
		
	}
}
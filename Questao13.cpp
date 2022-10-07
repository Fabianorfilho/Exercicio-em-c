/*Dado um número positivo, crie um programa que escreva todos os números ímparesmenores e/ou iguais a esse número e maiores ou igual a um.*/

#include <stdio.h>

int main(){
	int n,cont;
	
	printf("Digite um numero positivo: ");
	scanf("%d",&n);
	
	if(n%2 == 0){
		printf("Numero par digitado tente novamente com um numero impar");
		return (0);
	}
	
	printf("Os numeros impares menores que %d sao:\n",n);
	

	if(n%2 == 1)
	
	for(cont=n;cont>=1;cont=cont-2)
		printf("%d\n",cont);

}
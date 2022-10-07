/*Faça um programa que receba um número inteiro e que verifique se esse número é parou ímpar.
O programa deve informar se o número é par, caso afirmativo informar também seé ou não maior que 15 ou se o número é ímpar,
caso afirmativo informar se é ou não menorque 50.*/

#include <stdio.h>

int main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	if(n % 2 == 0){
		printf("O numero digitado e par");
		if(n > 15)
		printf("\nO numero e maior que 15");
		else
		printf("\nO numero e menor que 15");
	}
	if(n % 2 == 1){
		printf("O numero digitado e impar");
		if(n < 50)
		printf("\nO numero e menor que 50");
		else
		printf("\nO numero e maior que 50");
	}
}
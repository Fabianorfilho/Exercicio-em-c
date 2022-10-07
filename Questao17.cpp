/*O quadrado de um número natural n é dado pela soma dos n primeiros números ímparesconsecutivos.
Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc.
Dado um número n,calcule seu quadrado usando a soma de ímpares ao invés de produto.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,soma=0;

	printf("Digite um numero: ");
	scanf("%d", &n);

	for(i=1;i<n*2;i=i+2){
	soma = (soma+i);
	}
	printf("O quadrado desse numero e de: %d\n", soma);
	system("pause");
	return 0;
}
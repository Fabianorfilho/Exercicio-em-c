/*Faça um programa que lê dois valores e imprime:
se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiroem ordem decrescente;
se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>

int main(){

    int num1, num2,i ; 

    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1,&num2);
	
	if (num1 == num2){
   printf("valores iguais\n");
}else {
  if (num1 < num2) {
    printf("O primeiro valor e menor que o segundo \n");
    for(i= num1;i<= num2;i++){
      printf("%d \n",i);
    };
    
  } else {
    printf("O segundo valor e maior que o primeiro\n");
    for(i= num1;i>= num2;i--){
      printf("%i \n",i);
    };
  };
};
}

/*Dados um número natural n, exiba seu fatorial n!*/

#include<stdio.h>

int fat, n;

int main()
{ printf("Digite um valor:");
  scanf("%d", &n) ;

  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

    printf("O fatorial deste valor e igual a: \n%d", fat);
  return 0;
}
/*Faça o programa que apresenta a seguinte saída, perguntando ao usuário o númeromáximo (no exemplo, 9). Este número deve ser sempre ímpar.*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    int n, i, j;

    printf("Digite o numero maximo do triangulo.\n");
    printf("Atencao, o numero deve ser impar.\n");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 ==0)
    {
       printf("Numero invalido.\n");
       return 1;
    }
    else
    {
        for( i = 0; i<= (n / 2) + 1; i++)
        {
            for ( j = i + 1; j <= n - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
              printf(" ");
         }
    }

    return 0;
}
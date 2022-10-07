/*Faça um programa que solicite 2 números e informe: a soma dos números, o produto doprimeiro número pelo quadrado do segundo,
o quadrado do primeiro número, a raiz quadradada soma dos quadrados,
o seno da diferença do primeiro número pelo segundo e O módulodo primeiro número*/

#include <stdio.h>
#include <math.h>
int main(){
	
    double va1,va2,s;
    
	printf("Digite dois numeros: ");
    scanf("%lf %lf",&va1,&va2);
	printf("A soma foi de: %.3lf\n",va1+va2);
    printf("O produto do primeiro pelo quadrado do segundo: %.3lf\n",va1*(va2*va2));
    printf("O quadrado do primeiro numero e de: %.3lf\n",(va1*va1));
    printf("Raiz quadradada da soma dos quadrados e de: %.3lf\n",va1+va2);
    
	s = sin(va1)*cos(va2)-sin(va2)*cos(va1);
    
	printf("Seno da diferenca do primeiro pelo segundo %lf\n",s);
    printf("O modulo do primeiro numero e de: %.3lf\n",va1<0 ?  va1*-1:  va1 );
}
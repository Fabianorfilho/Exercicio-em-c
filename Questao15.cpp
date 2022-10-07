/*Faça um programa que mostre todos os números pares existentes entre 1 e 50.*/

#include <stdio.h>
main () {
    for (int i=1; i<=50/2; i++) {
        printf ("Numero par: %d\n",i*2);
    }
}
/*Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael einformar quem é o mais velho. Considere que essas pessoas possuem idades diferentes.*/

#include <stdio.h>
int main() {

    int id1, id2, id3; 

    printf("Digite a idade do Pedro: ");
    scanf("%d", &id1);

    printf("Digite a idade da Joana: ");
    scanf("%d", &id2); 

    printf("Agora digite a idade do Ismael: ");
    scanf("%d", &id3);

    if (id1 > id2 && id1 > id3){
    printf("Pedro e o mais velho. ", id1);
    } else 
    if (id2 > id1 && id2 > id3){
        printf("Joana e a mais velha. ", id2);
    }else 
    printf("Ismael e o mais velho.", id3);

return 0; 
}
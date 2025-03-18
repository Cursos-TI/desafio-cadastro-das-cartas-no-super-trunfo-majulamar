#include <stdio.h>

int main(){

    //dados primeira carta
    char estado1;
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pt1;

   //dados segunda carta

   char estado2[20];
   char codigo2[20];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int pt2;

   //carta 1

   printf("dados da primeira carta\n \n");

   printf("nome do estado: ");
   scanf(" %c", &estado1);
   
   printf("codigo da carta: ");
   scanf("%s", codigo1);

   printf("nome da cidade: ");
   scanf("%s", cidade1);

   printf("digite a população: ");
   scanf("%d", &populacao1);

   printf("digite a area (m²): ");
   scanf("%f", &area1);

   printf("digite o pib: ");
   scanf("%f", &pib1);

   printf("quantos pontos turisticos: ");
   scanf("%d", &pt1);

   //carta 2

   printf("dados da segunda carta\n \n");

   printf("nome do estado: ");
   scanf(" %c", &estado2);

   printf("codigo da carta: ");
   scanf("%s", codigo2);

   printf("nome da cidade: ");
   scanf("%s", cidade2);

   printf("digite a população: ");
   scanf("%d", &populacao2);

   printf("digite a area: ");
   scanf("%f", &area2);

   printf("digite o pib: ");
   scanf("%f", &pib2);

   printf("quantos pontos turisticos: ");
   scanf("%d", &pt2);

//resultado
//carta 1

printf("dados da primeira carta:\n \n");

printf("nome do estado: %c\n", estado1);

printf("codigo da carta: %s\n", codigo1);

printf("nome da cidade: %s\n", cidade1);

printf("digite a população: %d\n", populacao1);

printf("digite a area: %f\n", area1);

printf("digite o pib: %f\n", pib1);

printf("quantos pontos turisticos: %c\n", pt1);

//carta 2

printf("dados da segunda carta:\n \n");

printf("nome do estado: %c\n", estado2);

printf("codigo da carta: %s\n", codigo2);

printf("nome da cidade: %s\n", cidade2);

printf("digite a populacao: %d\n", populacao2);

printf("digite a area: %f\n", area2);

printf("digite o pib: %f\n", pib2);

printf("digite pontos turisticos: %d\n", pt2);

}




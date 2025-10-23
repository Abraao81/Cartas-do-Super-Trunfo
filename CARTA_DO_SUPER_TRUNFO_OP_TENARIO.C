#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis
    char estado1[50], estado2[50];
    unsigned long int populacao1, populacao2, Super_poder1, Super_poder2;
    float Dens_populac1, Pib_Capita1, Dens_populac2, Pib_Capita2;
    double area1, area2, pib1, pib2;
    int pontoturisticos1, pontoturisticos2;
    int Atributo, Carta;
  

    printf ("####### MENU SUPER TRUNFO ########\n");
    printf ("Comparação das Cartas\n");
    printf ("1 - Digite os Estados de cada CARTA:\n");
    printf ("2 - Comparar a População das Cartas:\n");
    printf ("3 - Comparar a Area das Cartas:\n");
    printf ("4 - Comparar o PIB das Cartas:\n");
    printf ("5 - Comparar o numeros de Pontos Turisticos das Cartas:\n");
    printf ("6 - Qual a Densidade Populacional das cartas:\n");

    printf ("Escolha uma OPÇÂO:\n");
    scanf("%d", &Atributo);

    switch (Atributo) 

{
case 1: 
  printf ("Estados da Carta 1 X Carta 2:\n");
  scanf("%s\n", estado1);
  scanf("%s\n", estado2);
  printf (" O Estado da Carta 1 é:%s O Estado da Carta 2 é: %s\n", estado1, estado2);
  break;
case 2: 
  printf ("Digite a População carta 1\n");
  scanf("%lu", &populacao1);
  printf ("Digite a População carta 2\n");
  scanf("%lu", &populacao2);
  Carta = (populacao1 > populacao2) ? 1 : ((populacao1 < populacao2) ? 2 : 0);
  break;
case 3: 
  printf ("Digite a Area da Carta 1:\n");
  scanf("%lf", &area1);
  printf ("Digite a Area da Carta 2:\n");
  scanf("%lf", &area2);
   Carta = (area1 > area2) ? 1 : ((area1 < area2) ? 2 : 0);
  break;
case 4: 
  printf ("Digite o PIB da Carta1:\n");
  scanf("%lf", &pib1);
  printf ("Digite o PIB da Carta2:\n");
  scanf("%lf", &pib2);
  Carta = (pib1 > pib2) ? 1 : ((pib1 < pib2) ? 2 : 0);
  break;
case 5: 
  printf ("Digite o numero de Pontos Turistico na Carta 1:\n");
  scanf("%d", &pontoturisticos1);
  printf ("Digite o numero de Pontos Turistico na Carta 1:\n");
  scanf("%d", &pontoturisticos2);
  Carta = (pontoturisticos1 > pontoturisticos2) ? 1 : ((pontoturisticos1 < pontoturisticos2) ? 2 : 0);
  break;
case 6: 
  printf ("Digite a população da Carta 1\n");
  scanf("%lu", &populacao1);
  printf ("Digite a Area da Carta 1:\n");
  scanf("%lf", &area1);
  printf ("Digite a população da Carta 2\n");
  scanf("%lu", &populacao2);
  printf ("Digite a Area da Carta 2:\n");
  scanf("%lf", &area2);
  Dens_populac1 = populacao1 / (float) area1;
  Dens_populac2 = populacao2 / (float) area2;
          Carta = (Dens_populac1 < Dens_populac2) ? 1 : ((Dens_populac1 > Dens_populac2) ? 2 : 0);
  break;

default:
printf ("Opcao invalida\n");
break;
}

if (Carta == 1) {
printf (" Carta 1 venceu!\n");
} 
else if (Carta == 2) {
printf (" Carta 2 venceu!\n");
} 
else if (Carta == 0) {
printf (" Empate!\n");
}
else {
printf (" Nenhum resultado válido calculado.\n");
}
return 0;
} 
   
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Desafio Super Trunfo - Paises\n");
    // DADOS DA CARTA 01 //
    char nome1[20];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    char pontos_turisticos1[20];
    char cidade1[20];
    float densidade_populacional1;
    float PIB_per_Capita1;
    float Super_Poder1;
    float resultado1;
    // DADOS DA CARTA 02 //
    char nome2[20];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    char pontos_turisticos2[20];
    char cidade2[20];
    float densidade_populacional2;
    float PIB_per_Capita2;
    float Super_Poder2;
    float resultado2;

  int  escolhajogador1;

    printf("Digite o nome do estado:\n");
    scanf("%s", nome1);

    printf("digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao1);
    getchar();

    printf("Digite a area em km²:\n");
    scanf("%f", &area1);

    getchar();
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);
    
    getchar();

    printf("Digite os pontos turisticos:\n");
    scanf("%s", pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    PIB_per_Capita1 = PIB1 / populacao1;
    
    Super_Poder1 =populacao1 + area1 + PIB1 + PIB_per_Capita1 + (1 / densidade_populacional1);

    printf("**Dados da CARTA A01** \n");
    printf("Estado: %s\n", nome1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %2.f\n", area1);
    printf("PIB: %2.f\n", PIB1);
    printf("Pontos Turisticos: %s\n", pontos_turisticos1);
    printf("Densidade Populacional: %2.f\n", densidade_populacional1);
    printf("PIB per capita: %2.f\n", PIB_per_Capita1);
    printf("Super Poder: %.2f\n", Super_Poder1);


    printf("Cadastre a Proxima Carta\n");
    

    printf("Digite o nome do estado:\n");
    scanf("%s", nome2);

    printf("digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a area em km²:\n");
    scanf("%f", &area2);

    getchar();
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    getchar();

    printf("Digite os pontos turisticos:\n");
    scanf("%s", pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    PIB_per_Capita2 = PIB2 / populacao2;
    Super_Poder2 =populacao2 + area2 + PIB2 + PIB_per_Capita2 + (1 / densidade_populacional2);
    
   
    printf("**Dados da CARTA B02**\n");
    printf("Estado: %s\n", nome2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %2.f\n", area2);
    printf("PIB: %2.f\n", PIB2);
    printf("Pontos Turisticos: %s\n", pontos_turisticos2);
    printf("Densidade Populacional: %2.f\n", densidade_populacional2);
    printf("PIB per capita: %2.f\n", PIB_per_Capita2);
    printf("Super Poder: %.2f\n", Super_Poder2);

    printf("*SELECIONE UM ATRIBUTO*\n");
    printf("*PARA SER COMPARADO COM A CARTA DO SEU ADVERSÁRIO:*\n");
  
    printf("1 População\n");
    printf("2 Área \n");
    printf("3 PIB\n");
    printf("4 Pontos turisticos\n");
    printf("5 Densidade populacional\n");
    printf("6 PIB per capita\n");
    printf("7 Super Poder\n");
    scanf("%d",&escolhajogador1);
    
    switch (escolhajogador1)
{
case 1:
    printf("população %lu\n", populacao1,populacao2);
  if (populacao1 > populacao2)
    printf("Você venceu!\n");
  else if (populacao1 < populacao2)
    printf("Você perdeu.\n");
  else
    printf("Empate!\n");
    break;
case 2:
    printf("Área %2.f\n", area1,area2);
  if (area1 > area2)
    printf("Você venceu!\n");
  else if (area1 < area2)
    printf("Você perdeu.\n");
  else
    printf("Empate!\n");
    break;
case 3:
    printf("PIB %2.f\n", PIB1,PIB2);
  if (PIB1 > PIB2)
    printf("Você venceu!\n");
  else if (PIB1 < PIB2)
    printf("Você Perdeu\n");
  else
    printf("Empate!\n");
  break;
    
case 4:
    printf("Pontos Turisticos %s\n", pontos_turisticos1,pontos_turisticos2);
  if (pontos_turisticos1 > pontos_turisticos2)
    printf("Você venceu!\n");
  else if (pontos_turisticos1 < pontos_turisticos2)
    printf("Você Perdeu\n");
  else
    printf("Empate!\n");
  break;

case 5:
    printf("Densidade populacional %2.f\n", densidade_populacional1,densidade_populacional2);
  if (densidade_populacional1 < densidade_populacional2)
    printf("Você venceu!\n");
  else if (densidade_populacional1 > densidade_populacional2)
    printf("Você Perdeu\n");
  else
    printf("Empate!\n");
  break;
case 6:
    printf("PIB per capita %2.f\n", PIB_per_Capita1,PIB_per_Capita2);
  if (PIB_per_Capita1 > PIB_per_Capita2)
    printf("Você venceu!\n");
  else if (PIB_per_Capita1 < PIB_per_Capita2)
    printf("Você Perdeu\n");
  else
    printf("Empate!\n");
  break;
case 7:
    printf("Super Poder %.2f\n", Super_Poder1,Super_Poder2);
  if (Super_Poder1 > Super_Poder2)
    printf("Você venceu!\n");
  else if (Super_Poder1 < Super_Poder2)
    printf("Você Perdeu\n");
  else
    printf("Empate!\n");
  break;

   
    
    return 0;
}
}
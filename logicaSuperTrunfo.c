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

    
    int atributo1, atributo2;
    int escolha1, escolha2;
   
    printf("*SELECIONE DOIS ATRIBUTOS*\n");
    printf("*PARA SER COMPARADO COM A CARTA DO SEU ADVERSÁRIO:*\n");
    
    printf("**PRIMEIRO ATRIBUTO**\n");
    printf("1 População\n");
    printf("2 Área \n");
    printf("3 PIB\n");
    printf("4 Pontos turisticos\n");
    printf("5 Densidade populacional\n");
    printf("6 PIB per capita\n");
    printf("7 Super Poder\n");
    scanf("%d",&escolha1);

   printf("Comparando Atributos\n");
   switch (escolha1)
   {
   case 1:
    printf("Você escolheu o atributo poulação\n");
    atributo1 = populacao1 > populacao2 ? 1:0;
    break;
  case 2:
    printf("Você escolheu o atributo Área\n");
    atributo1 = area1 > area2 ? 1:0;
    break;
  case 3:
    printf("Você escolheu o atributo PIB\n");
    atributo1 = PIB1 > PIB2 ? 1:0;
    break;
  case 4:
    printf("Você escolheu o Pontos Túristicos\n");
    atributo1 = pontos_turisticos1 > pontos_turisticos2 ? 1:0;
    break;
  case 5:
    printf("Você escolheu o atributo Densidade populacional\n");
    atributo1 = densidade_populacional1 < densidade_populacional2 ? 1:0;
    break;
  case 6:
    printf("Você escolheu o atributo PIB per Capita\n");
    atributo1 = PIB_per_Capita1 > PIB_per_Capita2 ? 1:0;
    break;
  case 7:
    printf("Você escolheu o atributo Super Poder\n");
    atributo1 = Super_Poder1 > Super_Poder2 ? 1:0;
    break;
   
   default:printf("Opção Invalida");
    break;
   }
   
    printf("**SEGUNDO ATRIBUTO**\n");
    printf("1 População\n");
    printf("2 Área \n");
    printf("3 PIB\n");
    printf("4 Pontos turisticos\n");
    printf("5 Densidade populacional\n");
    printf("6 PIB per capita\n");
    printf("7 Super Poder\n");
    scanf("%d",&escolha2);

    if (escolha1 == escolha2)
    {
      printf("Você escolheu o mesmo atributo!\n");
    } else {
      switch(escolha2)
  {
case 1:
  printf("Você escolheu o atributo poulação\n");
   atributo2 = populacao1 > populacao2 ? 1:0;
     break;
case 2:
  printf("Você escolheu o atributo Área\n");
   atributo2 = area1 > area2 ? 1:0;
     break;
case 3:
  printf("Você escolheu o atributo PIB\n");
   atributo2 = PIB1 > PIB2 ? 1:0;
    break;
case 4:
  printf("Você escolheu o Pontos Túristicos\n");
   atributo2 = pontos_turisticos1 > pontos_turisticos2 ? 1:0;
     break;
case 5:
  printf("Você escolheu o atributo Densidade populacional\n");
   atributo2 = densidade_populacional1 < densidade_populacional2 ? 1:0;
    break;
case 6:
  printf("Você escolheu o atributo PIB per Capita\n");
   atributo2 = PIB_per_Capita1 > PIB_per_Capita2 ? 1:0;
     break;
case 7:
  printf("Você escolheu o atributo Super Poder\n");
   atributo2 = Super_Poder1 > Super_Poder2 ? 1:0;
     break;
   
     default:printf("Opção Invalida");
   break;
    }
    
    printf("*** RESULTADO FINAL ***\n");
    if (atributo1 == 1 && atributo2 == 1) {
        printf("Você venceu nos dois atributos! VITÓRIA!\n");
    } else if (atributo1 == 0 && atributo2 == 0) {
        printf("Seu adversário venceu nos dois atributos! DERROTA!\n");
    } else {
        printf("Cada um venceu um atributo. EMPATE!\n");
    }

    return 0;

}
}
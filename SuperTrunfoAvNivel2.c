#include <stdio.h>
  
  int main(){
      //Variáveis das Cartas:
      char Estado1, Estado2;// Usar apenas um caractere de 'A a H  para representar o estado.
      char Codigo_da_carta1[4], Codigo_da_carta2[4];//Código da carta de 'A01 a B02'
      char Nome_da_cidade1[20], Nome_da_cidade2[20];//Nomes sem espaços com limite de 19.
      unsigned int Populacao1, Populacao2;//Sem sinal (não existe população negativa).
      int Pontos_turisticos1, Pontos_turisticos2, atributos;
      float Area1, Area2; // em Km²
      float Pib1, Pib2;// Produto interno bruto
      float densidade_demografica1, densidade_demografica2;// população por km²
      float PIB_per_capita1, PIB_per_capita2;// Divisão do PIB pela população
      float Super_Poder1, Super_Poder2;// Soma de todas as variáveis numéricas
  
  
      /* Cada jogador apresenta suas cartas, com as informaçoes
      de Estado, Código da carta, Nome da cidade, assim como a População
      àrea em km², pib e pontos turisticos. */
 
      printf("***Super Trunfo***\n\n"); 
      printf("Jogador 1 digite as informações de estado, código da carta e nome da cidade:\n");
 
  
      printf("Digite o estado (A-H):\n");
      scanf(" %c", &Estado1);
      printf("Digite o codigo da carta (A01 - B02):\n");
      scanf("%s", Codigo_da_carta1);
      printf("Digite o nome da cidade:\n");
      scanf("%s", Nome_da_cidade1);
 
      printf("Jogador 2 digite as informações de estado, código da carta e nome da cidade:\n");
 
      printf("Digite o estado (A-H):\n");
      scanf(" %c", &Estado2);
      printf("Digite o codigo da carta (A01 - B02):\n");
      scanf("%s", Codigo_da_carta2);
      printf("Digite o nome da cidade:\n");
      scanf("%s", Nome_da_cidade2); 
 
      /* Disputa entre as cartas
      disputa entrer atributos de carta contra carta*/
 
      printf("\n**Disputa entre cartas:***\n\n");
 
  
      printf("Digite a população da cidade : *Carta 1*\n");// especificador %u relacionado a unsigned
      scanf("%u", &Populacao1);
      printf("Digite Área total em km²: *Carta 1*\n");// Área em km²
      scanf("%f", &Area1);
      printf("Digite o valor do PIB em reais: *Carta 1*\n");
      scanf("%f", &Pib1);
      printf("Digite o número de pontos turísticos: *Carta 1*\n");
      scanf(" %d", &Pontos_turisticos1);

      densidade_demografica1=(float) Populacao1 / Area1;
      printf("A densidade demográfica 1 é de: %.4f\n", densidade_demografica1);
      PIB_per_capita1=(float) Pib1 / Populacao1;
      printf(" O pib per capta é:%.2f\n", PIB_per_capita1);
      Super_Poder1 =(float) Populacao1 + Area1 + Pib1 + Pontos_turisticos1 + PIB_per_capita1 + densidade_demografica1;
      printf("O Super Poder da Carta 1 é :%.2f\n", Super_Poder1);
      
      printf("Digite a população da cidade: *Carta 2*\n");
      scanf("%u", &Populacao2);
      printf("Digite Área total em km²: *Carta 2*\n");
      scanf("%f", &Area2);
      printf("Digite o valor do PIB em reais: *Carta 2*\n");
      scanf("%f", &Pib2);
      printf("Digite o número de pontos turísticos: *Carta 2*\n");
      scanf(" %d", &Pontos_turisticos2);

      densidade_demografica2=(float) Populacao2 / Area2;
      printf("A densidade demográfica 2 é de : %.4f\n", densidade_demografica2);
      PIB_per_capita2=(float) Pib2 / Populacao2;
      printf(" O pib per capta é:%.2f\n", PIB_per_capita2);
      Super_Poder2 =(float) Populacao2 + Area2 + Pib2 + Pontos_turisticos2 + PIB_per_capita2 + densidade_demografica2;
      printf("O Super poder da Carta 2 é :%.2f\n", Super_Poder2);
 
      
    //Escolha do Atrivuto à ser comparado
      printf("\n**Disputa entre Atributos**\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. Pib\n");
      printf("4. Pontos turisticos\n");
      printf("5. Densidade demográfica\n");
      printf("6. Pib per capita\n");
      printf("7. Super Poder\n");
      printf("Escolha um atributo\n");
      scanf("%d", &atributos);

      switch (atributos)
      {
      case 1:
      if (Populacao1 > Populacao2)
      {
        printf("População: Carta 1 venceu!\n");
      }
      else if (Populacao2 > Populacao1)
      {
        printf("População: Carta 2 venceu!\n\n");
      } else
       printf("Empate entre as Cartas!\n");
         break;
     case 2:
         if (Area1 > Area2)
     {
       printf("Área: Carta1 venceu!\n");
     }
     else if (Area2 > Area1)
     {
       printf("Área: Carta 2 venceu!\n\n");
     }
     else
       printf("Empate entre as Cartas!\n");
     break;
     case 3:
     if (Pib1 > Pib2)
     {
       printf("Pib: Carta1 venceu!\n");
     }
     else if(Pib2 > Pib1)
     {
       printf("Pib: Carta 2 venceu!\n\n");
     }
     else
       printf("Empate entre as Cartas!\n");
     break;
     case 4:
     if (Pontos_turisticos1 > Pontos_turisticos2)
     {
       printf(" Pontos turísticos: Carta1 venceu!\n");
     }
     else if(Pontos_turisticos2 > Pontos_turisticos1)
     {
       printf("Pontos turísticosCarta 2 venceu!\n\n");
     }
     else
       printf("Empate entre as Cartas!\n");
     break;
     case 5:
     if (densidade_demografica1 < densidade_demografica2)
     {
       printf("Densidade demográfica: Carta1 venceu!\n");
     }
     else if (densidade_demografica2 < densidade_demografica1)
     {
       printf("Densidade demográfica: Carta 2 venceu!\n\n");
     } else {
      printf("Empate entre as Cartas!\n");
     }
     break;
     case 6:
     if (PIB_per_capita1 > PIB_per_capita2)
     {
       printf("Pib per capita: Carta1 venceu!\n");
     }
     else if (PIB_per_capita2 > PIB_per_capita1)
     {
       printf("pib per capita: Carta 2 venceu!\n\n");
     } else {
      printf("Empate entre as Cartas!\n");
     }
     break;
     case 7:
     if (Super_Poder1 > Super_Poder2)
     {
       printf("Super poder: Carta1 venceu!\n");
     }
     else if (Super_Poder2 > Super_Poder1)
      { printf("Super poder: Carta 2 venceu!\n");
     }
     else{
       printf("Empate entre as Cartas!\n");
     }
     break;
       
      default: printf("ATRIBUTO INVÁLIDO!\n");
         break;
    }
      return 0;
    
    }
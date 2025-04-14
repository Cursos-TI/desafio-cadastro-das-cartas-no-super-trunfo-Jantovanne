#include <stdio.h>

// Desafio Super Trunfo.

int main() {
     //declaração de variaveis.
     unsigned int populacao, pontosturisticos, populacao2, pontosturisticos2;
     char estado[2];
     char codigocarta[4];
     char Nomecidade[50];
     float PIB, area, densidadepopulacional, PIBper, PIB2, area2, densidadepopulacional2, PIBper2;
     double SuperPoder;
     double SuperPoder2;
     //solicitação de inserção e leitura de dados da carta(1).
     printf("Bem vindo ao Super Trunfo!\n");
     printf("Digite a inicial do estado da sua carta: ");
     scanf("%s", estado);
     
     printf("digite o Código da carta: ");
     scanf("%s", codigocarta);

     printf("digite o nome da cidade: ");
     scanf("%s", Nomecidade);

     printf("digite a quantidade da população: ");
     scanf("%u", &populacao);

     printf("digite a área: ");
     scanf("%f", &area);

     printf("digite o PIB: ");
     scanf("%f", &PIB);

     printf("digite o número de pontos turísticos: ");
     scanf("%u", &pontosturisticos);
     // Cálculos da densidade populacional, do PIB per capita e do Super Poder da carta(1).
     densidadepopulacional = (float) populacao / area;
     PIBper = (float) PIB / populacao;
     SuperPoder = (float) populacao + (float) pontosturisticos + PIB + PIBper + area + (1 / densidadepopulacional);
        // Exibição dos dados da carta(1).
        printf("\n");
        printf("Dados da carta(1):\n");
        printf("Nome do estado: %s\n", estado);
        printf("Código da carta: %s\n", codigocarta);
        printf("Nome da cidade: %s\n", Nomecidade);
        printf("Quantidade da população: %d\n", populacao);
        printf("Área: %.2fKM²\n", area);
        printf("PIB: R$%.2f\n", PIB);
        printf("Pontos turísticos: %d\n", pontosturisticos);
        printf("Densidade populacional: %.2f\n", densidadepopulacional);
        printf("PIB per capita: %.2f\n", PIBper);
        printf("Super Poder: %.2f\n", SuperPoder);
     printf("\n");
     printf("*Carta(1) cadastrada com sucesso!*\n");
         //solicitação de inserção e leitura de dados da carta(2).
         printf("\n");
         printf("Digite a inicial do estado da sua carta: ");
         scanf("%s", estado);
         
         printf("digite o Código da carta: ");
         scanf("%s", codigocarta);
    
         printf("digite o nome da cidade: ");
         scanf("%s", Nomecidade);
    
         printf("digite a quantidade da população: ");
         scanf("%d", &populacao2);
    
         printf("digite a área: ");
         scanf("%f", &area2);
    
         printf("digite o PIB: ");
         scanf("%f", &PIB2);
    
         printf("digite o número de pontos turísticos: ");
         scanf("%d", &pontosturisticos2);
         // Cálculos da densidade populacional, do PIB per capita e do Super Poder da carta(2).
         densidadepopulacional2 = (float) populacao2 / area2;
         PIBper2 = (float) PIB2 / populacao2;
         SuperPoder2 = (float) populacao2 + (float) pontosturisticos2 + PIB2 + PIBper2 + area2 + (1 / densidadepopulacional2);

          // Exibição dos dados da carta(2).
        printf("\n");
        printf("dados da carta(2):\n");
        printf("Nome do estado: %s\n", estado);
        printf("Código da carta: %s\n", codigocarta);
        printf("Nome da cidade: %s\n", Nomecidade);
        printf("Quantidade da população: %d\n", populacao2);
        printf("Área: %.2fKM²\n", area2);
        printf("PIB: R$%.2f\n", PIB2);
        printf("Pontos turísticos: %d\n", pontosturisticos2);
        printf("Densidade populacional: %.2f\n", densidadepopulacional2);
        printf("PIB per capita: %.2f\n", PIBper2);
        printf("Super Poder: %.2f\n", SuperPoder2);
        printf("\n"); 
        printf("*Carta(2) cadastrada com sucesso\n*");
printf("\n");
      //Comparação e exibição de todos os dados das cartas.
      printf("*Iniciando comparação de dados*\n");
      printf("\n");
      printf("*Se o resultado for 1, carta 1 vence; se o resultado for 0, carta 2 vence.*\n");
      printf("\n");
      printf("Resultado(Quantidade da população): %d\n", populacao > populacao2);
      printf("Resultado(Área): %d\n", area > area2);
      printf("Resultado(PIB): %d\n", PIB > PIB2);
      printf("Resultado(Pontos turísticos): %d\n", pontosturisticos > pontosturisticos2);
      printf("Resultado(Densidade populacional): %d\n", densidadepopulacional < densidadepopulacional2);
      printf("Resultado(PIB per capita): %d\n", PIBper > PIBper2);
      printf("\n");
      printf("*Resultado final(Super Poder): %d*\n", SuperPoder > SuperPoder2);
    
        
      
      
      return 0;
}
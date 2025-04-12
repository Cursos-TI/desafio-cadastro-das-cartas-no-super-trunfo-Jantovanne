#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
     //declaração de variaveis.
     int populacao, pontosturisticos;
     char estado[2];
     char codigocarta[4];
     char Nomecidade[50];
     float PIB, area;
     
     //solicitação de inserção e leitura de dados da carta(1).
     printf("Digite a inicial do estado da sua carta: ");
     scanf("%s", estado);
     
     printf("digite o Código da carta: ");
     scanf("%s", codigocarta);

     printf("digite o nome da cidade: ");
     scanf("%s", Nomecidade);

     printf("digite a quantidade da população: ");
     scanf("%d", &populacao);

     printf("digite a área: ");
     scanf("%f", &area);

     printf("digite o PIB: ");
     scanf("%f", &PIB);

     printf("digite o número de pontos turísticos: ");
     scanf("%d", &pontosturisticos);

        // Exibição dos dados da carta(1).
        printf("\n");
        printf("dados da carta(1):\n");
        printf("Nome do estado: %s\n", estado);
        printf("Código da carta: %s\n", codigocarta);
        printf("Nome da cidade: %s\n", Nomecidade);
        printf("Quantidade da população: %d\n", populacao);
        printf("Área: %.2fKM²\n", area);
        printf("PIB: R$%.2f\n", PIB);
        printf("Pontos turísticos: %d\n", pontosturisticos);
     
         //solicitação de inserção e leitura de dados da carta(2).
         printf("\n");
         printf("Digite a inicial do estado da sua carta: ");
         scanf("%s", estado);
         
         printf("digite o Código da carta: ");
         scanf("%s", codigocarta);
    
         printf("digite o nome da cidade: ");
         scanf("%s", Nomecidade);
    
         printf("digite a quantidade da população: ");
         scanf("%d", &populacao);
    
         printf("digite a área: ");
         scanf("%f", &area);
    
         printf("digite o PIB: ");
         scanf("%f", &PIB);
    
         printf("digite o número de pontos turísticos: ");
         scanf("%d", &pontosturisticos);

          // Exibição dos dados da carta(2).
        printf("\n");
        printf("dados da carta(2):\n");
        printf("Nome do estado: %s\n", estado);
        printf("Código da carta: %s\n", codigocarta);
        printf("Nome da cidade: %s\n", Nomecidade);
        printf("Quantidade da população: %d\n", populacao);
        printf("Área: %.2fKM²\n", area);
        printf("PIB: R$%.2f\n", PIB);
        printf("Pontos turísticos: %d\n", pontosturisticos);
    return 0;
}
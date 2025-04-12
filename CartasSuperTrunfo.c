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
     
     //solicitação de inserção e leitura de dados.
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
        printf("dados da carta(1):\n");
        printf("%s\n", estado);
        printf("%s\n", codigocarta);
        printf("%s\n", Nomecidade);
        printf("%d\n", populacao);
        printf("%fKM²\n", area);
        printf("R$%f\n", PIB);
        printf("%d\n", pontosturisticos);
         // Exibição dos Dados das Cartas:
         // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
         // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}
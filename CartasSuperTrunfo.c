#include <stdio.h>

// Desafio Super Trunfo lógica.

int main() {
     //declaração de variaveis.
     unsigned long long int populacao, pontosturisticos, populacao2, pontosturisticos2, opcao, opcao2;
     char estado[2];
     char codigocarta[4];
     char Nomecidade[50], Nomecidade2[50];
     float PIB, area, densidadepopulacional, PIBper, PIB2, area2, densidadepopulacional2, PIBper2;
double soma, soma2, somatotal, somatotal2;
     //solicitação de inserção e leitura de dados da carta(1).
     printf("Bem vindo ao Super Trunfo!\n");
     printf("Digite a inicial do estado da sua carta: ");
     scanf("%s", estado);
     
     printf("digite o Código da carta: ");
     scanf("%s", codigocarta);

     printf("digite o nome da cidade: ");
     scanf("%s", Nomecidade);

     printf("digite a quantidade da população: ");
     scanf("%llu", &populacao);

     printf("digite a área: ");
     scanf("%f", &area);

     printf("digite o PIB: ");
     scanf("%f", &PIB);

     printf("digite o número de pontos turísticos: ");
     scanf("%llu", &pontosturisticos);

     // Cálculos da densidade populacional, do PIB per capita e do Super Poder da carta(1).
     densidadepopulacional = (float) populacao / area;
     PIBper =  PIB /(float) populacao;
     double SuperPoder = (float) populacao + (float) pontosturisticos + PIB + PIBper + area + (1 / densidadepopulacional);

        // Exibição dos dados da carta(1).
        printf("\n");
        printf("Dados da carta(1):\n");
        printf("Nome do estado: %s\n", estado);
        printf("Código da carta: %s\n", codigocarta);
        printf("Nome da cidade: %s\n", Nomecidade);
        printf("Quantidade da população: %llu\n", populacao);
        printf("Área: %.2fKM²\n", area);
        printf("PIB: R$%.2f\n", PIB);
        printf("Pontos turísticos: %llu\n", pontosturisticos);
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
         scanf("%s", Nomecidade2);
    
         printf("digite a quantidade da população: ");
         scanf("%llu", &populacao2);
    
         printf("digite a área: ");
         scanf("%f", &area2);
    
         printf("digite o PIB: ");
         scanf("%f", &PIB2);
    
         printf("digite o número de pontos turísticos: ");
         scanf("%llu", &pontosturisticos2);

         // Cálculos da densidade populacional, do PIB per capita e do Super Poder da carta(2).
         densidadepopulacional2 = (float) populacao2 / area2;
         PIBper2 =  PIB2 / (float) populacao2;
         double SuperPoder2 = (float) populacao2 + (float) pontosturisticos2 + PIB2 + PIBper2 + area2 + (1 / densidadepopulacional2);

          // Exibição dos dados da carta(2).
        printf("\n");
        printf("dados da carta(2):\n");
        printf("Nome do estado: %s\n", estado);
        printf("Código da carta: %s\n", codigocarta);
        printf("Nome da cidade: %s\n", Nomecidade);
        printf("Quantidade da população: %llu\n", populacao2);
        printf("Área: %.2fKM²\n", area2);
        printf("PIB: R$%.2f\n", PIB2);
        printf("Pontos turísticos: %llu\n", pontosturisticos2);
        printf("Densidade populacional: %.2f\n", densidadepopulacional2);
        printf("PIB per capita: %.2f\n", PIBper2);
        printf("Super Poder: %.2f\n", SuperPoder2);
        printf("\n"); 
        printf("*Carta(2) cadastrada com sucesso*\n");
printf("\n");

      //Exibindo o menu interativo para o usuário.
      printf("*Iniciando comparação de dados*\n");
      printf("\n");
      printf("Escolha dois atributos para comparar: \n");
      printf("1-População;\n");
      printf("2-Área;\n");
      printf("3-PIB;\n");
      printf("4-Pontos turísticos;\n");
      printf("5-Densidade populacional;\n");
      printf("6-PIB per capita;\n");
      printf("7-Super Poder.\n");
      scanf("%llu", &opcao);
      if (opcao > 7)
      {
            printf("Opção inválida!!\n");
      } else{
      
      printf("\n");
      printf("Escolha mais 1 atributo para comparar: \n");
      printf("1-População;\n");
      printf("2-Área;\n");
      printf("3-PIB;\n");
      printf("4-Pontos turísticos;\n");
      printf("5-Densidade populacional;\n");
      printf("6-PIB per capita;\n");
      printf("7-Super Poder.\n");
      scanf("%llu", &opcao2);
      printf("\n");
      if (opcao == opcao2)
      {
            printf("Atributo já selecionado, tente outra opção!!!\n");
      } else if (opcao2 > 7)
      {
            printf("Opção inválida!!!\n");
      }
      
       else {
      
   //Comparação e exibição de todos os atributos das cartas separadamente, da primeira escolha.

switch (opcao)
{
case 1: printf("%s: %llu\n", Nomecidade, populacao);
printf("%s: %llu\n", Nomecidade2, populacao2);
if (populacao > populacao2)
{ 
printf("Resultado(Quantidade da população): Carta1 venceu!\n" );
} else if (populacao < populacao2)
{
printf("Resultado(Quantidade da população): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Quantidade da população): Empate!\n" );
}
      break;
      case 2: printf("%s: %.2fKM²\n", Nomecidade, area);
      printf("%s: %.2fKM²\n", Nomecidade2, area2);
      if (area > area2)
      { 
      printf("Resultado(Área): Carta1 venceu!\n" );
      } else if (area < area2)
      {
      printf("Resultado(Área): Carta2 venceu!\n" );
      
      } else
      {
            printf("Resultado(Área): Empate!\n" );
      }
break;
case 3: printf("%s: R$%.2f\n", Nomecidade, PIB);
printf("%s: R$%.2f\n", Nomecidade2, PIB2);
if (PIB > PIB2)
{ 
printf("Resultado(PIB): Carta1 venceu!\n" );
} else if (PIB < PIB2)
{
printf("Resultado(PIB): Carta2 venceu!\n" );

} else
{
      printf("Resultado(PIB): Empate!\n" );
} 
break;
case 4: printf("%s: %llu\n", Nomecidade, pontosturisticos);
printf("%s: %llu\n", Nomecidade2, pontosturisticos2);
if (pontosturisticos > pontosturisticos2)
{ 
printf("Resultado(Pontos turísticos): Carta1 venceu!\n" );
} else if (pontosturisticos < pontosturisticos2)
{
printf("Resultado(Pontos turísticos): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Pontos turísticos): Empate!\n" );
} 
break;
case 5: printf("%s: %.2f\n", Nomecidade, densidadepopulacional);
printf("%s: %.2f\n", Nomecidade2, densidadepopulacional2);
if (densidadepopulacional > densidadepopulacional2)
{ 
printf("Resultado(Densidade populacional): Carta1 venceu!\n" );
} else if (densidadepopulacional < densidadepopulacional2)
{
printf("Resultado(Densidade populacional): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Densidade populacional): Empate!\n" );
} 
break;
case 6: printf("%s: R$%.2f\n", Nomecidade, PIBper);
printf("%s: R$%.2f\n", Nomecidade2, PIBper2);
if (PIBper > PIBper2)
{ 
printf("Resultado(PIB per capita): Carta1 venceu!\n" );
} else if (PIBper < PIBper2)
{
printf("Resultado(PIB per capita): Carta2 venceu!\n" );

} else
{
      printf("Resultado(PIB per capita): Empate!\n" );
} 
break;
case 7: printf("%s: %.2f\n", Nomecidade, SuperPoder);
printf("%s: %.2f\n", Nomecidade2, SuperPoder2);
if (SuperPoder > SuperPoder2)
{ 
printf("Resultado(Super Poder): Carta1 venceu!\n" );
} else if (SuperPoder < SuperPoder2)
{
printf("Resultado(Super Poder): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Super Poder): Empate!\n" );
} 
break;
printf("\n");
default: printf("Opção inválida, favor inserir uma das opções disponpíveis!\n");
      break;
}
printf("\n");

   //Comparação e exibição de todos os atributos das cartas separadamente, da segunda escolha.

switch (opcao2)
{
case 1: printf("%s: %llu\n", Nomecidade, populacao);
printf("%s: %llu\n", Nomecidade2, populacao2);
if (populacao > populacao2)
{ 
printf("Resultado(Quantidade da população): Carta1 venceu!\n" );
} else if (populacao < populacao2)
{
printf("Resultado(Quantidade da população): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Quantidade da população): Empate!\n" );
}
      break;
      case 2: printf("%s: %.2fKM²\n", Nomecidade, area);
      printf("%s: %.2fKM²\n", Nomecidade2, area2);
      if (area > area2)
      { 
      printf("Resultado(Área): Carta1 venceu!\n" );
      } else if (area < area2)
      {
      printf("Resultado(Área): Carta2 venceu!\n" );
      
      } else
      {
            printf("Resultado(Área): Empate!\n" );
      }
break;
case 3: printf("%s: R$%.2f\n", Nomecidade, PIB);
printf("%s: R$%.2f\n", Nomecidade2, PIB2);
if (PIB > PIB2)
{ 
printf("Resultado(PIB): Carta1 venceu!\n" );
} else if (PIB < PIB2)
{
printf("Resultado(PIB): Carta2 venceu!\n" );

} else
{
      printf("Resultado(PIB): Empate!\n" );
} 
break;
case 4: printf("%s: %llu\n", Nomecidade, pontosturisticos);
printf("%s: %llu\n", Nomecidade2, pontosturisticos2);
if (pontosturisticos > pontosturisticos2)
{ 
printf("Resultado(Pontos turísticos): Carta1 venceu!\n" );
} else if (pontosturisticos < pontosturisticos2)
{
printf("Resultado(Pontos turísticos): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Pontos turísticos): Empate!\n" );
} 
break;
case 5: printf("%s: %.2f\n", Nomecidade, densidadepopulacional);
printf("%s: %.2f\n", Nomecidade2, densidadepopulacional2);
if (densidadepopulacional > densidadepopulacional2)
{ 
printf("Resultado(Densidade populacional): Carta1 venceu!\n" );
} else if (densidadepopulacional < densidadepopulacional2)
{
printf("Resultado(Densidade populacional): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Densidade populacional): Empate!\n" );
} 
break;
case 6: printf("%s: R$%.2f\n", Nomecidade, PIBper);
printf("%s: R$%.2f\n", Nomecidade2, PIBper2);
if (PIBper > PIBper2)
{ 
printf("Resultado(PIB per capita): Carta1 venceu!\n" );
} else if (PIBper < PIBper2)
{
printf("Resultado(PIB per capita): Carta2 venceu!\n" );

} else
{
      printf("Resultado(PIB per capita): Empate!\n" );
} 
break;
case 7: printf("%s: %.2f\n", Nomecidade, SuperPoder);
printf("%s: %.2f\n", Nomecidade2, SuperPoder2);
if (SuperPoder > SuperPoder2)
{ 
printf("Resultado(Super Poder): Carta1 venceu!\n" );
} else if (SuperPoder < SuperPoder2)
{
printf("Resultado(Super Poder): Carta2 venceu!\n" );

} else
{
      printf("Resultado(Super Poder): Empate!\n" );
} 
break;
printf("\n");
default: printf("Opção inválida, favor inserir uma das opções disponpíveis!\n");
      break;
}

//Soma dos dois atributos escolhidos pelo usuário(carta1), mostrando os valores.

switch (opcao)
{
case 1:      
(soma = populacao);
break;
case 2:
(soma = area);
break;
case 3:
soma = PIB;
break;
case 4:
soma = pontosturisticos;
break;
case 5:
soma = densidadepopulacional;
break;
case 6:
soma = PIBper;
break;
case 7:
soma = SuperPoder;
break;

}
switch (opcao2)
{
case 1:      
soma2 = populacao;
break;
case 2:
soma2 = area;
break;
case 3:
soma2 = PIB;
break;
case 4:
soma2 = pontosturisticos;
break;
case 5:
soma2 = densidadepopulacional;
break;
case 6:
soma2 = PIBper;
break;
case 7:
soma2 = SuperPoder;
break;

}
(somatotal = soma + soma2);

printf("\n");
printf("Calculando a soma dos dois atributos para cada carta...\n");
printf("\n");
printf("Carta1: %.2f - ", somatotal);

//Soma dos dois atributos escolhidos pelo usuário(carta2), mostrando os valores.
switch (opcao)
{
case 1:      
soma = populacao2;
break;
case 2:
soma = area2;
break;
case 3:
soma = PIB2;
break;
case 4:
soma = pontosturisticos2;
break;
case 5:
soma = densidadepopulacional2;
break;
case 6:
soma = PIBper2;
break;
case 7:
soma = SuperPoder2;
break;

}

switch (opcao2)
{
case 1:      
soma2 = populacao2;
break;
case 2:
soma2 = area2;
break;
case 3:
soma2 = PIB2;
break;
case 4:
soma2 = pontosturisticos2;
break;
case 5:
soma2 = densidadepopulacional2;
break;
case 6:
soma2 = PIBper2;
break;
case 7:
soma2 = SuperPoder2;
break;

}
(somatotal2 = soma + soma2 );

printf("Carta2: %.2f\n", somatotal2);
printf("\n");

//Exibindo o resultado entre a comparação da soma dos dois atributos.
if (somatotal > somatotal2)
{
      printf("Carta1 venceu!!\n");
} else if (somatotal < somatotal2)
{
      printf("Carta2 venceu!!\n");
} else
{
      printf("Empate!!!\n");
}

        } }


 return 0;
}
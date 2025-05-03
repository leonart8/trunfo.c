#include <stdio.h>

int main(){
//declarando váriaveis.
    char estado[50], estado2[50], codest[6], codest2[6],  cidade[50], cidade2[50];
    int populacao , desidade;
    int populacao2, desidade2;
    int npt, deci, npt2;
    float area, area2, pib, pib2;;
  
    printf("digite 1 se quer que o computador gere a carta ou qualquer 2 se gostaria que o segundo jogador digitasse \n");
    scanf("%i" , &deci);
    if (deci == 1)
    {
      
      printf("carta 01\n Digite o estado representado por uma letra de 'A' até 'H': \n");
       (estado,50,stdin);
    printf("Digite nome da cidade:\n");
    getchar();

       fgets(cidade,50,stdin);
    printf("Agora digite o código da cidade com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).:\n");
       fgets(codest,6,stdin);
    printf("Digite o total populacional:\n");
      scanf(" %i", &populacao);
    printf("Digite a área da cidade:\n");
      scanf(" %f", &area);
    printf("Digite o pib:\n");
      scanf(" %f", &pib);
    printf("Digite o número de pontos turisticos que tem nessa cidade:\n");
      scanf(" %i", &npt);

     
          char estado2 [50] = "são paulo";
          char cidade2[50] = "são paulo";
          char codest2 [50]= "sp";
         double populacao2 =  1145200;  
          double area2 = 1521;
          int pib2 =  3;
          int npt2 = 5;
          //calculando densidades das cartas
         double desidade2 = populacao2/area2;
        double desidade = populacao/area;
         if (desidade2 > desidade)
         {
          printf("\n Carta 01: %s Código: (%s) desidade populacional: %d \n",cidade,codest, desidade);
          printf("\n Carta 02: %s Código:  (%s) desidade populacional: %.d ",cidade2,codest2, desidade2);
          printf("Carta 02: %s (%s) ganhou!", cidade2,codest2);
         }
         else
         {
          printf("\n Carta 01: %s Código: (%s) desidade populacional: %.d\n",cidade,codest, desidade);
          printf("\n Carta 02: %s Código:  (%s) desidade populacional: %d",cidade2,codest2, desidade2);  
          printf("Carta 01: %s (%s) ganhou!", cidade,codest); 
         }
          return 0;

    }
    
else 
  {
//recebendo dados da carta 01
    printf("carta 01\nDigite o estado representado por uma letra de 'A' até 'H':\n");
       fgets(estado,50,stdin);
    printf("Digite nome da cidade:\n");
       fgets(cidade,50,stdin);
    printf("Agora digite o código da cidade com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).:\n");
       fgets(codest,6,stdin);
    printf("Digite o total populacional:\n");
      scanf(" %i", &populacao);
    printf("Digite a área da cidade:\n");
      scanf(" %f", &area);
    printf("Digite o pib:\n");
      scanf(" %f", &pib);
    printf("Digite o número de pontos turisticos que tem nessa cidade:\n");
      scanf(" %i", &npt);
    
     // recebendo dados da carta 02
  printf("\ncarta 02\nDigite o estado representado por uma letra de 'A' até 'H':\n");
  getchar();
       fgets(estado2,50,stdin);
    printf("Digite nome da cidade:\n");
       fgets(cidade2,50,stdin);
    printf("Agora digite o código da cidade com a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).:\n");
      fgets(codest2,5,stdin);
    printf("Digite o total populacional:\n");
      scanf(" %i", &populacao2);
    printf("Digite a área da cidade:\n");
      scanf(" %f", &area2);
    printf("Digite o pib:\n");
      scanf(" %f", &pib2);
    printf("Digite o número de pontos turisticos que tem nessa cidade:\n");
      scanf(" %i", &npt2);
//exibindo as cartas 01 e 02
  printf("\nCarta 01: \nEstado: %sCódigo: %sNome da cidade:%sPopulação:%i \nÁrea:%.2f km²\nPIB:%.2f bilhões de reais\nNúmero de Pontos turisticos:%i\n",estado,codest,cidade,populacao,area,pib,npt);
  printf("\nCarta 02:\nEstado: %sCódigo: %sNome da cidade:%sPopulação:%i \nÁrea:%.2f km²\nPIB:%.2f bilhões de reais\nNúmero de Pontos turisticos:%i",estado2,codest2,cidade2,populacao2,area2,pib2,npt2);
  

  printf("Agora iremos comparar as duas carta, o que sera contado será a densidade populacional.\n");

  desidade= populacao/area;
  desidade2 = populacao2/area2;

  if (desidade > desidade2 );
  {
    printf("carta 1: %s , %s :%f ");
  }
  
    return 0;

  }
  return 0;
}
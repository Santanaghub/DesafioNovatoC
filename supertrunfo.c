#include <stdio.h>

int main(){
    char Estado1[50];
    char Código1[50];
    char Nome1[50];
    int Habitantes1;
    float Área1;
    float PIB1; 
    int Pontos_Turisticos1;

    printf("Carta1: \n");

    printf("Digite o nome do Estado1: \n");
    scanf("%d", &Estado1);

    printf("o código da carta1: \n");                                                                                                                                                                                                                                                                                 
    scanf("%d", &Código1);

    printf("seu nome da cidade: \n");
    scanf("%f", &Nome1);
                  
    printf("Digite a Populacao: \n");
    scanf("%d", &Habitantes1);
    
    printf("Digite a Área em Km²: \n");
    scanf("%f", &Área1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite os Pontos Turísticos1: \n");
    scanf("%d", &Pontos_Turisticos1);

    printf("o nome do Estado é: %d \n", Estado1);
    printf("o Codigo da Carta é: %d \n", Código1);
    printf("o Nome da Cidade é: %f \n", Nome1);
    printf("a população é: %d \n", Habitantes1);
    printf("a Área é: %f \n", Área1);
    printf("o PIB é: %f \n", PIB1);
    printf("os Pontos Turísticos é: %d \n", Pontos_Turisticos1);

    char Estado2[50];
    char Código2[50];
    char Nome2[50];
    int Habitantes2;
    float Área2, PIB2; 
    int Pontos_Turisticos2;

    printf("Carta2 \n");

    printf("Digite o nome do Estado2: \n");
    scanf("%d", &Estado2);
    
    printf("Digite o código da carta2: \n");                                                                                                                                                                                                                                                                                 
    scanf("%s", &Código2);
  
    printf("Digite o nome da cidade2: \n");
    scanf("%s", &Nome2);              
    
    printf("Digite a Populacao2: \n");
    scanf("%d", &Habitantes2);

    printf("Digite a Área2: \n");
    scanf("%f", &Área2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    
    printf("Digite os Pontos Turísticos: \n");
    scanf("%d", &Pontos_Turisticos2);

    printf("o nome do Estado é: %d \n", Estado2);
    printf("o Codigo da Carta é: %s \n", Código2);
    printf("o Nome da Cidade é: %s \n", Nome2);
    printf("a população é: %d \n", Habitantes2);
    printf("a Área é: %f \n", Área2);
    printf("o PIB é: %f \n", PIB2);
    printf("os Pontos Turísticos é: %d \n", Pontos_Turisticos2);
                  
    
    return 0;

}

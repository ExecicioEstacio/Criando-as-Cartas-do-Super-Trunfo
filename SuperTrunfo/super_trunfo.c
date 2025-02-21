#include <stdio.h>


typedef struct {
    // bibliotecas 

    char estado [50];
    char cód_carta [50];
    char nome_cidade [50];
    int populacao;
    int num_pontos_turisticos;
    float area_km;
    float pib;
}CARTA;

    int main() {
        CARTA carta1, carta2;

    //campos de cadastro carta1

    printf("Informe o estado carta1: \n");
    fgets(carta1.estado, sizeof(carta1.estado),stdin);

    printf("Digite o codigo da carta1: \n");
    scanf(" %[^\n]s", &carta1.cód_carta);
    
    printf("Nome da cidade carta1: \n");
    scanf(" %[^\n]s", &carta1.nome_cidade);

    printf("Populacao carta1: \n");
    scanf("%d", &carta1.populacao);

    printf("Quantos os pontos turisticos carta1: \n");
    scanf("%d", &carta1.num_pontos_turisticos);

    printf("Sua area em km carta1: \n");
    scanf("%f", &carta1.area_km);

    printf("Qual o pib carta1: \n");
    scanf("%f", &carta1.pib);
    
    fgets(carta1.estado, sizeof(carta1.estado),stdin);

    //campos de cadastro carta


    printf("Informe o estado carta2: \n");
    fgets(carta2.estado, sizeof(carta2.estado),stdin);

    printf("Digite o codigo da carta2: \n");
    scanf(" %[^\n]s", &carta2.cód_carta);
    
    printf("Nome da cidade carta2: \n");
    scanf(" %[^\n]s", &carta2.nome_cidade);

    printf("Populacao carta2: \n");
    scanf("%d", &carta2.populacao);

    printf("Quantos os pontos turisticos carta2: \n");
    scanf("%d", &carta2.num_pontos_turisticos);

    printf("Sua area em km carta2: \n");
    scanf("%f", &carta2.area_km);

    printf("Qual o pib carta2: \n");
    scanf("%f", &carta2.pib);
    fgets(carta2.estado, sizeof(carta2.estado),stdin);

    //area de visualizacao

    printf("\ncarta 1: \n");
    printf("\n Estado: %s \n Código: %s \n Cidade: %s \n", carta1.estado, carta1.cód_carta, carta1.nome_cidade);

    printf(" Populacão: %d \n Número Pontos turisticos: %d \n", carta1.populacao, carta1.num_pontos_turisticos);

    printf(" Área: %.2f Km² \n PIB bilhões de reais: %.2f \n", carta1.area_km, carta1.pib);

    printf("\ncarta 2: \n");
    printf("\n Estado: %s \n Código: %s \n Cidade: %s \n", carta2.estado, carta2.cód_carta, carta2.nome_cidade);

    printf(" Populacão: %d \n Número Pontos turisticos: %d \n", carta2.populacao, carta2.num_pontos_turisticos);

    printf(" Área: %.2f Km² \n PIB bilhões de reais: %.2f \n", carta2.area_km, carta2.pib);
    
    return 0;
}
#include <stdio.h>

typedef struct { // bibliotecas
char estado[50];
char cód_carta[50];
char nome_cidade[50];
int populacao;
int pontosturisticos;
float areakm;
float pib;
} CARTA;

int main() {
CARTA carta1, carta2;

// campos de cadastro carta1
printf("Informe o estado carta1: \n");
fgets(carta1.estado, sizeof(carta1.estado), stdin);

printf("Digite o codigo da carta1: \n");
scanf("%49[^\n]", carta1.cód_carta);
getchar(); // Limpa o buffer

printf("Nome da cidade carta1: \n");
scanf(" %49[^\n]", carta1.nome_cidade);
getchar(); // Limpa o buffer

printf("Populacao carta1: \n");
scanf("%d", &carta1.populacao);
getchar(); // Limpa o buffer

printf("Pontos Turisticos carta1: \n");
scanf("%d", &carta1.pontosturisticos);
getchar(); // Limpa o buffer

printf("Área em Km carta1: \n");
scanf("%f", &carta1.areakm);
getchar(); // Limpa o buffer

printf("PIB carta1: \n");
scanf("%f", &carta1.pib);
getchar(); // Limpa o buffer

printf("\n");
// campos de cadastro carta2
printf("Informe o estado carta2:\n");
fgets(carta2.estado, sizeof(carta2.estado), stdin);

printf("Digite o codigo da carta2: \n");
scanf(" %49[^\n]", carta2.cód_carta);
getchar(); // Limpa o buffer

printf("Nome da cidade carta2: \n");
scanf(" %49[^\n]", carta2.nome_cidade);
getchar(); // Limpa o buffer

printf("Populacao carta2: \n");
scanf("%d", &carta2.populacao);
getchar(); // Limpa o buffer

printf("Pontos Turisticos carta2: \n");
scanf("%d", &carta2.pontosturisticos);
getchar(); // Limpa o buffer

printf("Área em Km carta2: \n");
scanf("%f", &carta2.areakm);
getchar(); // Limpa o buffer

printf("PIB carta2: \n");
scanf("%f", &carta2.pib);
getchar(); // Limpa o buffer

// área de visualização
// carta1
printf("\ncarta 1: \n");
printf("Estado: %sCódigo: %s\nCidade: %s\n", carta1.estado, carta1.cód_carta, carta1.nome_cidade);
printf("População: %d\n", carta1.populacao);
printf("Pontos Turísticos: %d\n", carta1.pontosturisticos);
printf("Área: %.2f Km²\n", carta1.areakm);
printf("PIB: %.2f Bilhões de Reais\n", carta1.pib);

// carta2
printf("\ncarta 2: \n");
getchar();
printf("\nEstado: %s\n Código: %s\nCidade: %s\n", carta2.estado, carta2.cód_carta, carta2.nome_cidade);
printf("População: %d\n", carta2.populacao);
printf("Pontos Turísticos: %d\n", carta2.pontosturisticos);
printf("Área: %.2f Km²\n", carta1.areakm);
printf("PIB: %.2f Bilhões de Reais\n", carta2.pib);

printf("\n");

    return 0;
}
#include <stdio.h>

int main() {

    // Desafio Super Trunfo Iniciante
    char estados;
    char estado2;
    char codigo[50];
    char codigo2[50];
    char cidade[50];
    char cidade2[50];
    unsigned long int populacao;
    unsigned long int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int ponto;
    int ponto2;
    float resultado11;    // resultado densidade populacional carta 1
    float resultado12;    // resultado densidade populacional carta 2
    float resultado21;    // resultado pib per carta 1
    float resultado22;    // resultado pib per carta 2
    float superpoder1;
    float superpoder2;

    // Carta 1
    printf("Carta 1: \n");
    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estados);  
    printf("Digite uma letra de um estado em seguida de um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade);
    printf("Digite a população: \n");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto);

    // Carta 2
    printf("Vamos fazer o mesmo processo só que agora pra carta 2: \n");
    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado2); 
    printf("Digite uma letra de um estado em seguida de um número de 01 a 04 Ex:(B02,A03): \n");
    scanf("%s", codigo2);
    printf("Digite o nome de uma cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto2);

    //Area de calculo

    resultado11 = (float) populacao / area;
    resultado12 = (float) populacao2 / area2;
    resultado21 = (float) pib / populacao;
    resultado22 = (float) pib2 / populacao2;
    superpoder1 = (float) populacao + area + pib + ponto + resultado21 + (1 / resultado11);
    superpoder2 = (float) populacao2 + area2 + pib2 + ponto2 + resultado22 + (1 / resultado12);

    

    // Impressão
    printf("Carta 1: \n");
    printf("Estado: %c \n", estados);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto);
    printf("Densidade Populacional: %.2f hab/km² \n", resultado11);
    printf("PIB per Capita: %.2f reais \n", resultado21);
    printf("\n");

    // Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", ponto2);
    printf("Densidade Populacional: %.2f hab/km² \n", resultado12);
    printf("PIB per Capita: %.2f reais \n", resultado22);

    //Comparações

    printf("Comparação De Cartas: \n");
    printf("População: Carta 1 venceu (%d) \n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d) \n", area > area2);
    printf("Pib: Carta 1 venceu (%d) \n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d) \n", ponto > ponto2);
    printf("Densidade Populacional: Carta 1 venceu (%d) \n", resultado11 < resultado12);
    printf("PIB per Capita: Carta 1 venceu (%d) \n", resultado21 > resultado22);
    printf("Super Poder: Carta 1 venceu (%d) \n", superpoder1 > superpoder2);
    
    
    return 0;
}
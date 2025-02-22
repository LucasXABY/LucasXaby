#include <stdio.h>

int main(){

    //Desafio Super Trunfo Iniciante
    char estado[50];
    char estado2[50];
    char codigo[50];
    char codigo2[50];
    char cidade[50];
    char cidade2[50];
    int populaçao;
    int populaçao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int ponto;
    int ponto2;

    //Carta 1
    printf("Carta 1: \n");
    printf("Digite uma letra de A a H:");
    scanf("%s", &estado);
    printf("Digite uma letra de um estado em seguida de um número de 01 a 04 Ex(B02,A03):");
    scanf("%s", &codigo);
    printf("Digite o nome de uma cidade:");
    scanf("%s", &cidade);
    printf("Digite a população: ");
    scanf("%d", &populaçao);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto);
    //Carta 2
    printf("Vamos fazer o mesmo processo só que agora pra carta 2: \n");
    
    printf("Digite uma letra de A a H: ");
    scanf("%s", &estado2);
    printf("Digite uma letra de um estado em seguida de um número de 01 a 04 Ex(B02,A03): ");
    scanf("%s", &codigo2);
    printf("Digite o nome de uma cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%d", &populaçao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto2);

    //Impressão

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populaçao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto);

    //Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populaçao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", ponto2);

    return 0;

}
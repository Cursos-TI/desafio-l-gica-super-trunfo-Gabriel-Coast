#include <stdio.h>

int main(){
    
    char estado1[10], estado2[10];
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosturistico1, pontosturistico2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;
    float SuperPoder1, SuperPoder2;

    //Dados da primeira carta

    printf("Estado 1: \n");
    scanf("%s", &estado1);
    printf("Código 1: \n");
    scanf("%s", &codigo1);
    printf("Cidade 1: \n");
    scanf("%s", &cidade1);
    printf("População 1: \n");
    scanf("%d", &populacao1);
    printf("Área 1: \n");
    scanf("%f", &area1);
    printf("PIB 1: \n");
    scanf("%f", &PIB1);
    printf("Pontos Turisticos 1: \n");
    scanf("%d", &pontosturistico1);

    //Cáculos da DensidadePopulacional, PIBpercapita, SuperPoder.
    
    densidadepopulacional1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1; 
    SuperPoder1 = populacao1 + area1 + PIB1 + pontosturistico1 + PIBpercapita1 + densidadepopulacional1;



}
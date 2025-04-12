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

    //Dados da primeira carta.

    printf("Estado 1: \n");
    scanf("%10s", &estado1);
    printf("Código 1: \n");
    scanf("%5s", &codigo1);
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

    //Cáculos da DensidadePopulacional 1, PIBpercapita 1, SuperPoder 1.

    densidadepopulacional1 = populacao1 / area1;
    PIBpercapita1 = PIB1 / populacao1; 
    SuperPoder1 = populacao1 + area1 + PIB1 + pontosturistico1 + PIBpercapita1 + densidadepopulacional1;

    //Dados da segunda carta.
    
    printf("Estado 2:\n");
    scanf("%9s", &estado2);
    printf("Código 2:\n");
    scanf("%s", &codigo2);
    printf("Cidade 2:\n");
    scanf("%s", &cidade2);
    printf("População 2:\n");
    scanf("%d", &populacao2);
    printf("Área 2:\n");
    scanf("%f", &area2);
    printf("PIB 2:\n");
    scanf("%f", &PIB2);
    printf("Pontos Turisticos 2:\n");
    scanf("%d", &pontosturistico2);

    //Calculando a DensidadePopulacional 2, PIBpercapita 2, SuperPoder 2.

    densidadepopulacional2 = populacao2 / area2;
    PIBpercapita2 = PIB2 / populacao2;
    SuperPoder2 = populacao2 + area2 + PIB2 + pontosturistico2 + PIBpercapita2 + densidadepopulacional2;

    //Dados coletados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontosturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", PIBpercapita1);
    printf("Super Poder: %f\n ", SuperPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder: %f\n", SuperPoder2);

    //Comparações das cartas.
    printf("\nComparações das Cartas:\n");

    if (populacao1 > populacao2) {
        printf("Cidade 1 tem a maior População.\n");
    } else if(populacao1 < populacao2){
        printf("Cidade 2 tem a maior População.\n");
    } else{
        printf("Houve um empate!\n");
    }


    if (area1 > area2) {
        printf("Cidade 1 tem a maior Área.\n");
    } else if(area1 < area2){
        printf("Cidade 2 tem a maior Área.\n");
    }else{
        printf("Houve um empate!\n");
    }



    if (PIB1 > PIB2) {
        printf("Cidade 1 tem o maior PIB.\n");
    } else if(PIB1 < PIB2){
        printf("Cidade 2 tem o maior PIB.\n");
    }else{
        printf("Houve um empate!\n");
    }



    if (pontosturistico1 > pontosturistico2) {
        printf("Cidade 1 tem os maior Pontos Turisticos.\n");
    } else if(pontosturistico1 < pontosturistico2){
        printf("Cidade 2 tem os maior Pontos Turisticos.\n");
    }else{
        printf("Houve um empate!\n");
    }



    if (densidadepopulacional1 > densidadepopulacional2) {
        printf("Cidade 1 tem a maior Densidade Populacional.\n");
    } else if(densidadepopulacional1 < densidadepopulacional2){
        printf("Cidade 2 tem a maior Densidade Populacional.\n");
    }else{
        printf("Houve um empate!\n");
    }



    if (PIBpercapita1 > PIBpercapita2) {
        printf("Cidade 1 tem o maior PIB per capita.\n");
    } else if(PIBpercapita1 < PIBpercapita2){
        printf("Cidade 2 tem o maior PIB per capita.\n");
    }else{
        printf("Houve um empate!\n");
    }



    if (SuperPoder1 > SuperPoder2) {
        printf("Cidade 1 tem o maior Super Poder.\n");
    } else if(SuperPoder1 < SuperPoder2){
        printf("Cidade 2 tem o maior Super Poder.\n");
    }else{
        printf("Houve um empate!\n");
    }
    


}
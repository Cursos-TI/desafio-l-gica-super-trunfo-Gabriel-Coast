#include <stdio.h>
#include <string.h>
#include <stdlib.h>



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
    
    printf("\n*** Cadastrando a Primeira Carta ***\n");
    printf("Estado 1: \n");
    scanf("%10s", estado1);
    printf("Código 1: \n");
    scanf("%5s", codigo1);
    printf("Cidade 1: \n");
    scanf("%s", cidade1);
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
    printf("\n*** Cadastrando a Segunda Carta ***\n");
    printf("Estado 2:\n");
    scanf("%10s", estado2);
    printf("Código 2:\n");
    scanf("%s", codigo2);
    printf("Cidade 2:\n");
    scanf("%s", cidade2);
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
    printf("Super Poder: %.2f\n", SuperPoder1);

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
    printf("Super Poder: %.2f\n", SuperPoder2);

    //Comparações das cartas.

    int atributo1, atributo2;
    float valor1_attr1, valor2_attr1;
    float valor1_attr2, valor2_attr2;
    float soma1, soma2;

    printf("\n--- Menu de Atributos ---\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n6. PIB per capita\n");

    do {
        printf("Escolha o PRIMEIRO atributo (1 a 6): ");
        scanf("%d", &atributo1);
    } while (atributo1 < 1 || atributo1 > 6);

    do {
        printf("Escolha o SEGUNDO atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1);

    // Função simples: pegar valor com base no atributo
    #define GET_VAL(carta, attr) ( \
        attr == 1 ? (float)populacao##carta : \
        attr == 2 ? area##carta : \
        attr == 3 ? PIB##carta : \
        attr == 4 ? (float)pontosturistico##carta : \
        attr == 5 ? densidadepopulacional##carta : \
                   PIBpercapita##carta )

    valor1_attr1 = GET_VAL(1, atributo1);
    valor2_attr1 = GET_VAL(2, atributo1);
    valor1_attr2 = GET_VAL(1, atributo2);
    valor2_attr2 = GET_VAL(2, atributo2);

    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("Atributo %d: %.2f (Cidade 1) vs %.2f (Cidade 2)\n", atributo1, valor1_attr1, valor2_attr1);
    printf("Atributo %d: %.2f (Cidade 1) vs %.2f (Cidade 2)\n", atributo2, valor1_attr2, valor2_attr2);
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("--- %s venceu! ---\n", cidade1);
    } else if (soma2 > soma1) {
        printf("--- %s venceu! ---\n", cidade2);
    } else {
        printf("--- Empate! ---\n");
    }

    int opcao;
    
    switch (opcao)
    {
    case 1:
    if (populacao1 > populacao2) {
        printf("%s tem a maior População.\n", cidade1);
    } else if(populacao1 < populacao2){
        printf("%s tem a maior População.\n", cidade2);
    } else{
        printf("### Houve um empate! ###\n");}
    
        break;
    
    case 2:
    if (area1 > area2) {
        printf("%s tem a maior Área.\n", cidade1);
    } else if(area1 < area2){
        printf("%s tem a maior Área.\n", cidade2);
    }else{
        printf("### Houve um empate! ###\n");
    }

        break;

    case 3:
    if (PIB1 > PIB2) {
        printf("%s tem o maior PIB.\n", cidade1);
    } else if(PIB1 < PIB2){
        printf("%s tem o maior PIB.\n", cidade2);
    }else{
        printf("### Houve um empate! ###\n");
    }

        break;

    case 4:
    if (pontosturistico1 > pontosturistico2) {
        printf("%s tem mais Pontos Turisticos.\n", cidade1);
    } else if(pontosturistico1 < pontosturistico2){
        printf("%s tem mais Pontos Turisticos.\n", cidade2);
    }else{
        printf("### Houve um empate! ###\n");
    }

        break;

    case 5:
    if (densidadepopulacional1 > densidadepopulacional2) {
        printf("%s tem a maior Densidade Populacional.\n", cidade1);
    } else if(densidadepopulacional1 < densidadepopulacional2){
        printf("%s tem a maior Densidade Populacional.\n", cidade2);
    }else{
        printf("### Houve um empate! ###\n");
    }

        break;
        
    case 6:
    if (PIBpercapita1 > PIBpercapita2) {
        printf("%s tem o maior PIB per capita.\n", cidade1);
    } else if(PIBpercapita1 < PIBpercapita2){
        printf("%s tem o maior PIB per capita.\n", cidade2);
    }else{
        printf("### Houve um empate! ###\n");
    }

        break;
        

    default:
    printf("Opção invalida!\n");
    }

return 0;

}
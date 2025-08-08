#include <stdio.h>



int main() {
    printf("Cartas Super Trunfo \n");

    char estado[3];
    char estado2[3];
    char nomedacidade[50];
    char nomedacidade2[50];
    char codigodacarta[4];
    char codigodacarta2[4];
    int população;
    int população2;
    float área;
    float área2;
    float pib;
    float pib2;
    int pontosturísticos;
    int pontosturísticos2;
    float densidadepopulacional = população / área;
    float densidadepopulacional2 = população2 / área2;
    float pibpercapita = pib / população;
    float pibpercapita2 = pib2 / população2;

    printf("nome do estado: \n");
    scanf("%s", estado);
    printf("nome do estado 2: \n");
    scanf("%s", estado2);

    printf("nome da cidade: \n");
    scanf("%s", nomedacidade);
    printf("nome da cidade2 \n");
    scanf("%s", nomedacidade2);


    printf("codigo da carta:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigodacarta);
    printf("codigo da carta2:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", codigodacarta2);

    printf("população: \n");
    scanf("%d", &população);
    printf("população2: \n");
    scanf("%d", &população2);

    printf("área: \n");
    scanf("%f", &área);
    printf("área2: \n");
    scanf("%f", &área2);

    printf("pib: \n");
    scanf("%f", &pib);
    printf("pib2: \n");
    scanf("%f", &pib2);

    printf("pontos turísticos: \n");
    scanf("%d", &pontosturísticos);
    printf("pontos turísticos2: \n");
    scanf("%d", &pontosturísticos2);

    densidadepopulacional = população / área;
    pibpercapita = pib / população;

    densidadepopulacional2 = população2 / área2;
    pibpercapita2 = pib2 / população2;


    printf("nome do estado: %s \\n", estado);
    printf("nome do estado2: %s \\n", estado2);
    printf("nome da cidade: %s \n", nomedacidade);
    printf("nome da cidade2: %s \n", nomedacidade2);
    printf("codigo da carta: %s \n", codigodacarta);
    printf("codigo da carta2: %s \n", codigodacarta2);
    printf("população: %d \n", população);
    printf("população2: %d \n", população2);
    printf("área: %.2f \n", área);
    printf("área2: %.2f \n", área2);
    printf("pib: %.2f \n", pib);
    printf("pib2: %.2f \n", pib2);
    printf("pontos turísticos: %d \n", pontosturísticos);
    printf("pontos turísticos2: %d \n", pontosturísticos2);
    printf("dencidade populacional: %.2f \n", densidadepopulacional);
    printf("dencidade populacional2: %.2f \n", densidadepopulacional2);
    printf("pib per capita: %.2f \n", pibpercapita);
    printf("pib per capita2: %.2f \n", pibpercapita2);


    return 0;


}
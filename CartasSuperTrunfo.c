#include <stdio.h>



int main() {
    printf("Cartas Super Trunfo \n");

    char estado[20];
    char estado2[20];
    char nomedacidade[50];
    char nomedacidade2[50];
    char codigodacarta[5];
    char codigodacarta2[5];
    unsigned long int população;
    unsigned long int população2;
    float área;
    float área2;
    float pib;
    float pib2;
    int pontosturísticos;
    int pontosturísticos2;
    float densidadepopulacional;
    float densidadepopulacional2; 
    float pibpercapita; 
    float pibpercapita2; 
    float superPoder;
    float superPoder2;
    int opcao;

    printf("nome do estado: \n");
    scanf(" %s", estado);
    printf("nome do estado 2: \n");
    scanf(" %s", estado2);

    printf("nome da cidade: \n");
    scanf(" %s[^\\n]", nomedacidade);
    printf("nome da cidade2 \n");
    scanf(" %s[^\\n]", nomedacidade2);


    printf("codigo da carta:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf(" %3s", codigodacarta);
    printf("codigo da carta2:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf(" %3s", codigodacarta2);

    printf("população: \n");
    scanf("%lu", &população);
    printf("população2: \n");
    scanf("%lu", &população2);

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

    densidadepopulacional = (float)população / área;
    pibpercapita = (pib*1000000000.0f) / (float)população;

    densidadepopulacional2 = (float)população2 / área2;
    pibpercapita2 = (pib2*1000000000.0f) / (float)população2;

    superPoder = (float)população + área + (pib * 1000000000.0f) + (float)pontosturísticos + (1.0f / densidadepopulacional) + pibpercapita;
    superPoder2 = (float)população2 + área2 + (pib2 * 1000000000.0f) + (float)pontosturísticos2 + (1.0f / densidadepopulacional2) + pibpercapita2;

    printf("nome do estado: %s \n", estado);
    printf("nome do estado2: %s \n", estado2);
    
    printf("nome da cidade: %s \n", nomedacidade);
    printf("nome da cidade2: %s \n", nomedacidade2);
   
    printf("codigo da carta: %s \n", codigodacarta);
    printf("codigo da carta2: %s \n", codigodacarta2);
    
    printf("população: %lu \n", população);
    printf("população2: %lu \n", população2);
    
    printf("área: %.2f \n", área);
    printf("área2: %.2f \n", área2);
   
    printf("pib: %.2f \n", pib);
    printf("pib2: %.2f \n", pib2);
    
    printf("pontos turísticos: %d \n", pontosturísticos);
    printf("pontos turísticos2: %d \n", pontosturísticos2);
    
    printf("densidade populacional: %.2f \n", densidadepopulacional);
    printf("densidade populacional2: %.2f \n", densidadepopulacional2);
    
    printf("pib per capita: %.2f \n", pibpercapita);
    printf("pib per capita2: %.2f \n", pibpercapita2);
    
    printf("super poder da carta: %.2f \n", superPoder);
    printf("super poder da carta2: %.2f \n", superPoder2);

    printf("vencedor população: %u \n", população > população2);
    printf("vencedor área: %d \n", área > área2);
    printf("vencedor pib: %d \n", pib > pib2);
    printf("vencedor pontos turísticos: %d \n", pontosturísticos > pontosturísticos2);
    printf("vencedor densidade P: %d \n", densidadepopulacional < densidadepopulacional2);
    printf("vencedor pib per capita: %d \n", pibpercapita > pibpercapita2);

    printf("*** ESCOLHA QUAL ATRIBUTO COMPARAR: *** \n");
    printf("1. Comparar população! \n");
    printf("2. comparar área! \n");
    printf("3. comparar PIB! \n");
    printf("4. comparar Numero de Pontos Turísticos! \n");
    printf("5. comparar Densidade Demográfica! \n");
    printf(" ESCOLHA: \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("População 1: %d \n", população);
        printf("população 2: %d \n", população2);
        if(população > população2){
            printf("*** Parabens voce venceu! ***");
        } else if(população == população2){
            printf("*** EMPATE *** \n");
        }else{
            printf("*** Infelizmente voce perdeu! ***");
        }
        break;

        case 2:
        printf("Área 1: %2.f \n", área);
        printf("Área 2: %2.f \n", área2);
        if(área > área2){
            printf("*** Parabens voce venceu! ***");
        } else if(área == área2){
            printf("*** EMPATE *** \n");
        } else{
            printf("*** Infelizmente voce perdeu! ***");
        }
        break;

        case 3:
        printf("PIB 1: %2.f \n", pib);
        printf("PIB 2: %2.f \n", pib2);
        if(pib > pib2){
            printf("*** Parabens voce venceu! ***");
        } else if(pib == pib2){
            printf("*** EMPATE *** \n");
        } else{
            printf("*** Infelizmente voce perdeu! ***");
        }
        break;

        case 4:
        printf("Número de Pontos Turísticos 1: %d \n", pontosturísticos);
        printf("Número de Pontos Turísticos 2: %d \n", pontosturísticos2);
        if(pontosturísticos > pontosturísticos2){
            printf("*** Parabens voce venceu! ***");
        } else if(pontosturísticos == pontosturísticos2){
            printf("*** EMPATE *** \n");
        } else{
            printf("*** Infelizmente voce perdeu! ***");
        }
        break;

        case 5:
        printf("Densidade Populacional 1: %2.f \n", densidadepopulacional);
        printf("Densidade Populacional 2: %2.f \n", densidadepopulacional2);
        if(densidadepopulacional < densidadepopulacional2){
            printf("*** Infelizmente voce perdeu! ***");
        } else if(densidadepopulacional == densidadepopulacional2){
            printf("*** EMPATE *** \n");
        } else{
            printf("*** Parabens voce venceu! ***");
        }
        break;
        default:
        printf("Opção Inválida!!!");

    
        
        }
        
    
    
        
        
     


   


    return 0;


}
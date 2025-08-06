#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Cartas Super Trunfo \n");

    char estado;
    char nomedacidade;
    char codigodacarta;
    float população;
    float área;
    float pib;
    int pontosturísticos;

    printf("nome do estado: \n");
    scanf("%s", &estado);

    printf("nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("codigo da carta:A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
    scanf("%s", &codigodacarta);

    printf("população: \n");
    scanf("%f", &população);

    printf("área: \n");
    scanf("%f", &área);

    printf("pib: \n");
    scanf("%f", &pib);

    printf("pontos turísticos: \n");
    scanf("%d", &pontosturísticos);


    printf("nome do estado: %s \n", estado);
    printf("nome da cidade: %s \n", nomedacidade);
    printf("codigo da carta: %s \n", codigodacarta);
    printf("população: %f \n", população);
    printf("área: %f \n", área);
    printf("pib: %f \n", pib);
    printf("pontos turísticos: %d \n", pontosturísticos);





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;





}
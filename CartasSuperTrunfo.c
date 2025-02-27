#include <stdio.h>
//inicio do desafio
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//por William Jefferson
//whats: (92)984906517


int main() {

    //inicio
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //declaração das variáveis
    char letra1[15], letra2[15]; // IMPORTANTE: DECLARAR NOVAS VARIÁVEIS PARA NOVAS CARTAS!!!
    char codigo1[15], nome1[15], codigo2[15], nome2[15];
    int habitantes,habitantes2, pontostur, pontostur2;
    float area, area2, pib, pib2, densipop1, densipop2, pibperct1, pibperct2;

    /*

    Ao testar o script foi notado que as informações estavam se repetindo.
    E para resolvir este problema, foi nescessário criar novas variáveis,
    assim as cartas podem ser únicas e informar os dados corretos.

    */

    //inicialização de variáveis (algumas)
    habitantes = 19281;
    pontostur = 281;

    //entrada de dados da primeira carta
    printf("CARTA 01 \n");

    printf("Digite a inicial do estado (Ex.: G): \n"); //letra inicial do estado
    scanf("%s", &letra1);

    printf("Digite o codigo do estado (Ex.: 01AB): \n"); //codigo da carta
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n"); //nome da cidade
    scanf("%s", &nome1);

    printf("Digite o numero de habitantes: \n"); //numero de habitantes
    scanf("%d", &habitantes);

    printf("Digite a area da cidade: \n"); //area da cidade em km2
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n"); //valor do PIB
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n"); //numero de pontos turisticos
    scanf("%d", &pontostur);

    densipop1 = (float) habitantes / area; //calcular a densidade populacional da primeira carta
    pibperct1 = (float) pib / habitantes; //calcular o pib per capta


    //entrada de dados da segunda carta
    printf("CARTA 02 \n");
    
    printf("Digite a inicial do estado (Ex.: G): \n"); //letra inicial do estado
    scanf("%s", &letra2);

    printf("Digite o codigo do estado (Ex.: 01AB): \n"); //codigo da carta
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n"); //nome da cidade
    scanf("%s", &nome2);

    printf("Digite o numero de habitantes: \n"); //numero de habitantes
    scanf("%d", &habitantes2);

    printf("Digite a area da cidade: \n"); //area da cidade em km2
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n"); //valor do PIB
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n"); //numero de pontos turisticos
    scanf("%d", &pontostur2);

    densipop2 = (float) habitantes2 / area2; //calcular a densidade populacional da segunda carta
    pibperct2 = (float) pib2 / habitantes2; //calcular o pib per capta
    

    //visualização da carta 01
    printf("CARTA 01 \n");
    printf("Estado: %s \n", letra1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d \n", habitantes);
    printf("Área: %.2f km2 \n", area);
    printf("PIB: %.2f Bilhoes de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", pontostur);
    printf("Densidade populacional: %.2f hab/km2 \n", densipop1);
    printf("PIB per capta: %.2f reais \n", pibperct1);

    //visualização da carta 02
    printf("CARTA 02 \n");
    printf("Estado: %s \n", letra2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", habitantes2);
    printf("Área: %.2f km2 \n", area2);
    printf("PIB: %.2f Bilhoes de reais \n", pib2);
    printf("Número de pontos turíticos: %d \n", pontostur2);
    printf("Densidade populacional: %.2f hab/km2 \n", densipop2);
    printf("PIB per capta: %.2f reais \n", pibperct2);

    return 0;
}

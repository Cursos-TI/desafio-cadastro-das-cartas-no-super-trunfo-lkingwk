#include <stdio.h>
//inicio do desafio
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //inicio
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //declaração das variáveis
    char letra1[15], letra2[15]; // IMPORTANTE: DECLARAR NOVAS VARIÁVEIS PARA NOVAS CARTAS!!!
    char codigo1[15], nome1[15], codigo2[15], nome2[15];
    int habitantes,habitantes2, pontostur, pontostur2;
    float area, area2, pib, pib2;

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

    //visualização da carta 01
    printf("CARTA 01 \n");
    printf("LETRA: %s \n", letra1);
    printf("CODIGO: %s \n", codigo1);
    printf("NOME DA CIDADE: %s \n", nome1);
    printf("NUMERO DE HABITANTES: %d \n", habitantes);
    printf("AREA: %.2f km2 \n", area);
    printf("PIB: %.2f Bilhoes de reais \n", pib);
    printf("NUMERO DE PONTOS TURISTICOS: %d \n", pontostur);

    //visualização da carta 02
    printf("CARTA 02 \n");
    printf("LETRA: %s \n", letra2);
    printf("CODIGO: %s \n", codigo2);
    printf("NOME DA CIDADE: %s \n", nome2);
    printf("NUMERO DE HABITANTES: %d \n", habitantes2);
    printf("AREA: %.2f km2 \n", area2);
    printf("PIB: %.2f Bilhoes de reais \n", pib2);
    printf("NUMERO DE PONTOS TURISTICOS: %d \n", pontostur2);

    return 0;
}

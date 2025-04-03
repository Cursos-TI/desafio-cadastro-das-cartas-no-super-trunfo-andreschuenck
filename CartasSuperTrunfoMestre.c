// Desafio: Cadastro das cartas no Super Trunfo
#include <stdio.h>

int main(void) {
    // Variáveis para armazenar os dados da primeira carta
    char estado1 = '\0';
    char codigo1[5] = {0};
    char nomeCidade1[50] = {0};
    unsigned long int populacao1 = 0; // Mudança para unsigned long int
    float area1 = 0.0;
    float pib1 = 0.0;
    int pontosTuristicos1 = 0;
    float densidade1 = 0.0; // Inicializa a densidade
    float pibPerCapita1 = 0.0; // Inicializa o PIB per Capita
    float superPoder1 = 0.0; // Inicializa o Super Poder

    // Variáveis para armazenar os dados da segunda carta
    char estado2 = '\0';
    char codigo2[5] = {0};
    char nomeCidade2[50] = {0};
    unsigned long int populacao2 = 0; // Mudança para unsigned long int
    float area2 = 0.0;
    float pib2 = 0.0;
    int pontosTuristicos2 = 0;
    float densidade2 = 0.0; // Inicializa a densidade
    float pibPerCapita2 = 0.0; // Inicializa o PIB per Capita
    float superPoder2 = 0.0; // Inicializa o Super Poder

    // Leitura dos dados da primeira carta
    printf("################## CADASTRO DA PRIMEIRA CARTA ##################\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1); // Mudança para %lu
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a primeira carta
    densidade1 = (float)populacao1 / area1; // Calcular Densidade Populacional
    pibPerCapita1 = (pib1 * 1e9) / populacao1; // Calcular PIB per Capita
    superPoder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1); // Calcular Super Poder

    // Leitura dos dados da segunda carta
    printf("\n################## CADASTRO DA SEGUNDA CARTA ##################\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%4s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2); // Mudança para %lu
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a segunda carta
    densidade2 = (float)populacao2 / area2; // Calcular Densidade Populacional
    pibPerCapita2 = (pib2 * 1e9) / populacao2; // Calcular PIB per Capita
    superPoder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2); // Calcular Super Poder

    // Exibição dos dados da primeira carta
    printf("\n################## DADOS DA PRIMEIRA CARTA ##################\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da segunda carta
    printf("\n################## DADOS DA SEGUNDA CARTA ##################\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos

    printf("\n################## RESULTADO ##################\n");
    int resultado;
    
    resultado = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = densidade1 < densidade2; // Menor densidade vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = pibPerCapita1 > pibPerCapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);
    
    resultado = superPoder1 > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);


    return 0;
}

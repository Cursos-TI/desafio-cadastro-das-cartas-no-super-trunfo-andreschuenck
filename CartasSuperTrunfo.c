#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Variáveis para armazenar os dados da primeira carta
    
    int main(void) {
        // Variáveis para armazenar os dados da primeira carta
        char estado1 = '\0';
        char codigo1[5] = {0};
        char nomeCidade1[50] = {0};
        int populacao1 = 0;
        float area1 = 0.0;
        float pib1 = 0.0;
        int pontosTuristicos1 = 0;
    
        // Variáveis para armazenar os dados da segunda carta
        char estado2 = '\0';
        char codigo2[5] = {0};
        char nomeCidade2[50] = {0};
        int populacao2 = 0;
        float area2 = 0.0;
        float pib2 = 0.0;
        int pontosTuristicos2 = 0;
    
        // Leitura dos dados da primeira carta
        printf("################## CADASTRO DA PRIMEIRA CARTA ##################\n");
        printf("Estado (A-H): ");
        scanf(" %c", &estado1);
        
        printf("Código da Carta (ex: A01): ");
        scanf("%4s", codigo1);
        
        printf("Nome da Cidade: ");
        scanf(" %49[^\n]", nomeCidade1);
        
        printf("População: ");
        scanf("%d", &populacao1);
        
        printf("Área (em km²): ");
        scanf("%f", &area1);
        
        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib1);
        
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosTuristicos1);
    
        // Leitura dos dados da segunda carta
        printf("\n################## CADASTRO DA SEGUNDA CARTA ##################\n");
        printf("Estado (A-H): ");
        scanf(" %c", &estado2);
        
        printf("Código da Carta (ex: A01): ");
        scanf("%4s", codigo2);
        
        printf("Nome da Cidade: ");
        scanf(" %49[^\n]", nomeCidade2);
        
        printf("População: ");
        scanf("%d", &populacao2);
        
        printf("Área (em km²): ");
        scanf("%f", &area2);
        
        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib2);
        
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosTuristicos2);
    
        // Exibição dos dados da primeira carta
        printf("\n################## DADOS DA PRIMEIRA CARTA ##################\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
        // Exibição dos dados da segunda carta
        printf("\n################## DADOS DA SEGUNDA CARTA ##################\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
        return 0;
    }
    
    

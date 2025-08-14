#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível mestre

int main() {
    
    // Declaração dos Atributos das Cartas:
    char codigoCarta[4], codigoCarta2[4]; // 3 dígitos + caractere nulo
    char nomePais[50], nomePais2[50]; // 49 caracteres + caractere nulo
    int populacao, populacao2;
    float area, area2, pib, pib2;
    int numPontosTuristicos, numPontosTuristicos2;
           
    // Cadastro das Cartas:
    printf("========================================\n");
    printf("Cadastro da carta 1\n");

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", nomePais); // Permite ler strings com espaços    
    
    printf("Insira a população do país: ");
    scanf("%d", &populacao);

    printf("Insira a área do país (em km²): ");
    scanf("%f", &area);
    
    printf("Insira o PIB do país (em bilhões): ");
    scanf("%f", &pib);
    
    printf("Insira o número de pontos turísticos do país: ");
    scanf("%d", &numPontosTuristicos);

    // Densidade populacional
    float densidadePopulacional = (float)populacao / area;
    
    // PIB per capita
    float pibPerCapita = pib*1000000000 / (float)populacao;

    printf("========================================\n");
    printf("Cadastro da carta 2\n");

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", nomePais2); // Permite ler strings com espaços

    printf("Insira a população do país: ");
    scanf("%d", &populacao2);
    
    printf("Insira a área do país (em km²): ");
    scanf("%f", &area2);
    
    printf("Insira o PIB do país (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Insira o número de pontos turísticos do país: ");
    scanf("%d", &numPontosTuristicos2);

    // Densidade populacional 
    float densidadePopulacional2 = (float)populacao2 / area2;
    
    // PIB per capita
    float pibPerCapita2 = pib2*1000000000 / (float)populacao2;
        
    // Exibição dos Dados das Cartas
    printf("========================================\n");
    printf("CARTA 1\n");
    printf("Código: %s\n", codigoCarta);
    printf("País: %s\n", nomePais);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    printf("========================================\n");
    printf("CARTA 2\n");
    printf("Código: %s\n", codigoCarta2);
    printf("País: %s\n", nomePais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação dos atributos das cartas
    
    // Variáveis para a lógica de múltiplos atributos
    int atributoEscolhido1 = 0, atributoEscolhido2 = 0;
    float valorAttr1_C1 = 0, valorAttr1_C2 = 0;
    float valorAttr2_C1 = 0, valorAttr2_C2 = 0;

    // --- Menu 1: Escolha do primeiro atributo ---
    printf("\n========================================\n");
    printf("Escolha o PRIMEIRO atributo para a batalha:\n");
    printf("1. População\n");
    printf("2. Área (km²)\n");
    printf("3. PIB (bilhões)\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional (menor vence)\n");
    printf("6. PIB per Capita\n");
    printf("Sua escolha: ");
    scanf("%d", &atributoEscolhido1);

    // Validação da primeira escolha
    if (atributoEscolhido1 < 1 || atributoEscolhido1 > 6) {
        printf("Erro: Escolha de atributo inválida! O programa será encerrado.\n");
        return 1; // Termina o programa com um código de erro
    }

    // --- Menu 2: Escolha do segundo atributo (dinâmico) ---
    printf("\n========================================\n");
    printf("Escolha o SEGUNDO atributo para a batalha:\n");
    if (atributoEscolhido1 != 1) printf("1. População\n");
    if (atributoEscolhido1 != 2) printf("2. Área (km²)\n");
    if (atributoEscolhido1 != 3) printf("3. PIB (bilhões)\n");
    if (atributoEscolhido1 != 4) printf("4. Pontos Turísticos\n");
    if (atributoEscolhido1 != 5) printf("5. Densidade Populacional (menor vence)\n");
    if (atributoEscolhido1 != 6) printf("6. PIB per Capita\n");

    printf("Sua escolha: ");
    scanf("%d", &atributoEscolhido2);

    // Validação da segunda escolha (não pode ser igual à primeira ou inválida)
    if (atributoEscolhido2 == atributoEscolhido1 || atributoEscolhido2 < 1 || atributoEscolhido2 > 6) {
        printf("Erro: Escolha de atributo inválida ou repetida! O programa será encerrado.\n");
        return 1; // Termina o programa com um código de erro
    }

    // Coleta dados do primeiro atributo escolhido
    switch (atributoEscolhido1) {
        case 1: valorAttr1_C1 = populacao; valorAttr1_C2 = populacao2; break;
        case 2: valorAttr1_C1 = area; valorAttr1_C2 = area2; break;
        case 3: valorAttr1_C1 = pib; valorAttr1_C2 = pib2; break;
        case 4: valorAttr1_C1 = numPontosTuristicos; valorAttr1_C2 = numPontosTuristicos2; break;
        case 5: valorAttr1_C1 = densidadePopulacional; valorAttr1_C2 = densidadePopulacional2; break;
        case 6: valorAttr1_C1 = pibPerCapita; valorAttr1_C2 = pibPerCapita2; break;
    }

    // Coleta dados do segundo atributo escolhido
    switch (atributoEscolhido2) {
        case 1: valorAttr2_C1 = populacao; valorAttr2_C2 = populacao2; break;
        case 2: valorAttr2_C1 = area; valorAttr2_C2 = area2; break;
        case 3: valorAttr2_C1 = pib; valorAttr2_C2 = pib2; break;
        case 4: valorAttr2_C1 = numPontosTuristicos; valorAttr2_C2 = numPontosTuristicos2; break;
        case 5: valorAttr2_C1 = densidadePopulacional; valorAttr2_C2 = densidadePopulacional2; break;
        case 6: valorAttr2_C1 = pibPerCapita; valorAttr2_C2 = pibPerCapita2; break;
    }

    // Calcula a soma dos atributos para cada carta
    float somaCarta1 = valorAttr1_C1 + valorAttr2_C1;
    float somaCarta2 = valorAttr1_C2 + valorAttr2_C2;

    // Exibe o placar detalhado
    printf("\n========================================\n");
    printf("           PLACAR DA BATALHA\n");
    printf("========================================\n\n");

    printf("País: %s (Carta %s)\n", nomePais, codigoCarta);
    printf(" - ");
    switch (atributoEscolhido1) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf(": %.2f\n", valorAttr1_C1);
    printf(" - ");
    switch (atributoEscolhido2) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf(": %.2f\n", valorAttr2_C1);
    printf(" - SOMA TOTAL: %.2f\n\n", somaCarta1);

    printf("País: %s (Carta %s)\n", nomePais2, codigoCarta2);
    printf(" - ");
    switch (atributoEscolhido1) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf(": %.2f\n", valorAttr1_C2);
    printf(" - ");
    switch (atributoEscolhido2) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf(": %.2f\n", valorAttr2_C2);
    printf(" - SOMA TOTAL: %.2f\n\n", somaCarta2);

    printf("========================================\n");

    // Determina e exibe o vencedor com base na soma
    if (somaCarta1 > somaCarta2) {
        printf("VENCEDOR: Carta %s (%s)!\n", codigoCarta, nomePais);
    } else if (somaCarta2 > somaCarta1) {
        printf("VENCEDOR: Carta %s (%s)!\n", codigoCarta2, nomePais2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

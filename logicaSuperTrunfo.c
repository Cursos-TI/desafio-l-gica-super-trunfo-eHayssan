#include <stdio.h>

// Desafio Super Trunfo - Desenvolvendo a lógica
// Nível MESTRE

int main() {
    
    // Declaração dos Atributos das Cartas:
    char codigoCarta[4], codigoCarta2[4]; // 3 dígitos + caractere nulo
    char nomePais[50], nomePais2[50]; // 49 caracteres + caractere nulo
    unsigned long int populacao, populacao2;
    double area, area2, pib, pib2;
    int numPontosTuristicos, numPontosTuristicos2;
           
    // Cadastro das Cartas:
    printf("========================================\n");
    printf("Cadastro da carta 1\n");

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", nomePais); // Permite ler strings com espaços    
    
    printf("Insira a população do país: ");
    scanf("%lu", &populacao);

    printf("Insira a área do país (em km²): ");
    scanf("%lf", &area);
    
    printf("Insira o PIB do país (em bilhões): ");
    scanf("%lf", &pib);
    
    printf("Insira o número de pontos turísticos do país: ");
    scanf("%d", &numPontosTuristicos);

    // Densidade populacional (com verificação de divisão por zero) e maior precisão
    double densidadePopulacional;
    if (area > 0.0) {
        densidadePopulacional = (double)populacao / area;
    } else {
        densidadePopulacional = 0.0;
    }
    
    // PIB per capita (com verificação de divisão por zero) e maior precisão
    double pibPerCapita;
    if (populacao > 0) {
        pibPerCapita = (pib * 1000000000.0) / (double)populacao;
    } else {
        pibPerCapita = 0.0;
    }

    // Super Poder (com maior precisão)
    double superPoder;
    double inversoDensidade = 0.0;
    if (densidadePopulacional > 0.0) {
        inversoDensidade = 1.0 / densidadePopulacional;
    }
    superPoder = (double)populacao + area + pib + (double)numPontosTuristicos + pibPerCapita + inversoDensidade;

    printf("========================================\n");
    printf("Cadastro da carta 2\n");

    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome do país: ");
    scanf(" %[^\n]", nomePais2); // Permite ler strings com espaços

    printf("Insira a população do país: ");
    scanf("%lu", &populacao2);
    
    printf("Insira a área do país (em km²): ");
    scanf("%lf", &area2);
    
    printf("Insira o PIB do país (em bilhões): ");
    scanf("%lf", &pib2);
    
    printf("Insira o número de pontos turísticos do país: ");
    scanf("%d", &numPontosTuristicos2);

    // Densidade populacional (com verificação de divisão por zero) e maior precisão
    double densidadePopulacional2;
    if (area2 > 0.0) {
        densidadePopulacional2 = (double)populacao2 / area2;
    } else {
        densidadePopulacional2 = 0.0;
    }
    
    // PIB per capita (com verificação de divisão por zero) e maior precisão
    double pibPerCapita2;
    if (populacao2 > 0) {
        pibPerCapita2 = (pib2 * 1000000000.0) / (double)populacao2;
    } else {
        pibPerCapita2 = 0.0;
    }
        
    // Super Poder (com maior precisão)
    double superPoder2;
    double inversoDensidade2 = 0.0;
    if (densidadePopulacional2 > 0.0) {
        inversoDensidade2 = 1.0 / densidadePopulacional2;
    }
    superPoder2 = (double)populacao2 + area2 + pib2 + (double)numPontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    // Exibição dos Dados das Cartas
    printf("========================================\n");
    printf("CARTA 1\n");
    printf("Código: %s\n", codigoCarta);
    printf("País: %s\n", nomePais);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n", superPoder);

    printf("========================================\n");
    printf("CARTA 2\n");
    printf("Código: %s\n", codigoCarta2);
    printf("País: %s\n", nomePais2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos das cartas
    
    // Variáveis para a lógica de múltiplos atributos
    int atributoEscolhido1 = 0, atributoEscolhido2 = 0;
    int vitoriasCarta1 = 0, vitoriasCarta2 = 0;
    double valorAttr1_C1 = 0, valorAttr1_C2 = 0;
    double valorAttr2_C1 = 0, valorAttr2_C2 = 0;

    // --- Menu 1: Escolha do primeiro atributo ---
    printf("\n========================================\n");
    printf("Escolha o PRIMEIRO atributo para a batalha:\n");
    printf("1. População\n");
    printf("2. Área (km²)\n");
    printf("3. PIB (bilhões)\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Sua escolha: ");
    scanf("%d", &atributoEscolhido1);

    // Validação da primeira escolha
    if (atributoEscolhido1 < 1 || atributoEscolhido1 > 7) {
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
    if (atributoEscolhido1 != 5) printf("5. Densidade Populacional\n");
    if (atributoEscolhido1 != 6) printf("6. PIB per Capita\n");
    if (atributoEscolhido1 != 7) printf("7. Super Poder\n");

    printf("Sua escolha: ");
    scanf("%d", &atributoEscolhido2);

    // Validação da segunda escolha (não pode ser igual à primeira ou inválida)
    if (atributoEscolhido2 == atributoEscolhido1 || atributoEscolhido2 < 1 || atributoEscolhido2 > 7) {
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
        case 7: valorAttr1_C1 = superPoder; valorAttr1_C2 = superPoder2; break;
    }

    // Coleta dados do segundo atributo escolhido
    switch (atributoEscolhido2) {
        case 1: valorAttr2_C1 = populacao; valorAttr2_C2 = populacao2; break;
        case 2: valorAttr2_C1 = area; valorAttr2_C2 = area2; break;
        case 3: valorAttr2_C1 = pib; valorAttr2_C2 = pib2; break;
        case 4: valorAttr2_C1 = numPontosTuristicos; valorAttr2_C2 = numPontosTuristicos2; break;
        case 5: valorAttr2_C1 = densidadePopulacional; valorAttr2_C2 = densidadePopulacional2; break;
        case 6: valorAttr2_C1 = pibPerCapita; valorAttr2_C2 = pibPerCapita2; break;
        case 7: valorAttr2_C1 = superPoder; valorAttr2_C2 = superPoder2; break;
    }

    // Compara o primeiro atributo e conta as vitórias
    if (atributoEscolhido1 == 5) { // Regra especial para Densidade Populacional
        if (valorAttr1_C1 < valorAttr1_C2) vitoriasCarta1++;
        else if (valorAttr1_C2 < valorAttr1_C1) vitoriasCarta2++;
    } else { // Regra padrão (maior vence)
        if (valorAttr1_C1 > valorAttr1_C2) vitoriasCarta1++;
        else if (valorAttr1_C2 > valorAttr1_C1) vitoriasCarta2++;
    }

    // Compara o segundo atributo e conta as vitórias
    if (atributoEscolhido2 == 5) { // Regra especial para Densidade Populacional
        if (valorAttr2_C1 < valorAttr2_C2) vitoriasCarta1++;
        else if (valorAttr2_C2 < valorAttr2_C1) vitoriasCarta2++;
    } else { // Regra padrão (maior vence)
        if (valorAttr2_C1 > valorAttr2_C2) vitoriasCarta1++;
        else if (valorAttr2_C2 > valorAttr2_C1) vitoriasCarta2++;
    }

    // Exibe o placar detalhado
    printf("\n========================================\n");
    printf("           PLACAR DA BATALHA\n");
    printf("========================================\n\n");

    printf("País: %s (Carta %s)\n", nomePais, codigoCarta);
    printf(" - ");
    switch(atributoEscolhido1) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
    }
    printf(": %.2f\n", valorAttr1_C1);
    
    printf(" - ");
    switch(atributoEscolhido2) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
    }
    printf(": %.2f\n\n", valorAttr2_C1);

    printf("País: %s (Carta %s)\n", nomePais2, codigoCarta2);
    printf(" - ");
    switch(atributoEscolhido1) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
    }
    printf(": %.2f\n", valorAttr1_C2);

    printf(" - ");
    switch(atributoEscolhido2) {
        case 1: printf("População"); break;
        case 2: printf("Área (km²)"); break;
        case 3: printf("PIB (bilhões)"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Populacional"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
    }
    printf(": %.2f\n\n", valorAttr2_C2);

    printf("========================================\n");

    // Determina e exibe o vencedor com base na contagem de vitórias
    if (vitoriasCarta1 == 2) {
        printf("VENCEDOR DA RODADA: Carta %s (%s)!\n", codigoCarta, nomePais);
    } else if (vitoriasCarta2 == 2) {
        printf("VENCEDOR DA RODADA: Carta %s (%s)!\n", codigoCarta2, nomePais2);
    } else {
        printf("Resultado: Empate na rodada!\n");
    }

    return 0;
}
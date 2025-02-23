#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definindo as variáveis em conformidade com a quantidade de cartas.
    Char estado1, estado2;
    Char codigo1, codigo2;
    Char cidade1, cidade2;
    Int populacao1, populacao2;
    Float area1, area2;
    Float pib1, pib2;
    Int pontos1, pontos2;
    
    // Cadastro das Cartas:
    // Printf para mostrar ao usuário o que ele deve digitar, scanf para que o usuário possa inserir a informação.
    Printf("Seja bem vindo ao cadatro de cartas!");
    Printf("Digite o nome do estado: \n");
    Scanf("%s", &estado1);
    Printf("Digite o código da carta: \n");
    Scanf("%s", &codigo1);
    Printf("Digite o nome da cidade: \n");
    Scanf("%s", &cidade1);
    Printf("Digite a área total: \n");
    Scanf("%d", &area1);
    Printf("Digite o valor do PIB: \n");
    Scanf("%f", &pib1);
    Printf("Digite o número de pontos turísticos: \n");
    Scanf("%d", pontos1);

    // Solicitar ao usuário as mesmas informações para a segunda carta.

    Printf("Digite o nome do estado: \n");
    Scanf("%s", &estado2);
    Printf("Digite o código da carta: \n");
    Scanf("%s", &codigo2);
    Printf("Digite o nome da cidade: \n");
    Scanf("%s", &cidade2);
    Printf("Digite a área total: \n");
    Scanf("%d", &area2);
    Printf("Digite o valor do PIB: \n");
    Scanf("%f", &pib2);
    Printf("Digite o número de pontos turísticos: \n");
    Scanf("%d", pontos2);

    // Exibição dos Dados da primeira Carta:
    // Utilizando a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.
    Printf("Primeira carta: \n");
    Printf("Estado: %s", estado1);
    Printf("Código da carta: %s", codigo1);
    Printf("Nome da cidade: %s", cidade1);
    Printf("Área total: %d", area1);
    Printf("Valor do PIB: %f", pib1);
    Printf("Número de pontos turísticos: %d", pontos1);

    // Exibição dos Dados da primeira Carta:
    // Utilizando a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.

    Printf("Segunda carta: \n");
    Printf("Estado: %s", estado2);
    Printf("Código da carta: %s", codigo2);
    Printf("Nome da cidade: %s", cidade2);
    Printf("Área total: %d", area2);
    Printf("Valor do PIB: %f", pib2);
    Printf("Número de pontos turísticos: %d", pontos2);

    return 0;
}

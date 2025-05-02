#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    
    printf("Codigo (ex: A01): ");
    scanf("%3s", carta1.codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1.nome_cidade);
    
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &carta1.pib);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    
    printf("Codigo (ex: B02): ");
    scanf("%3s", carta2.codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2.nome_cidade);
    
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &carta2.pib);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados
    printf("\n=== Dados das Cartas Cadastradas ===\n");

    // Primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    // Segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
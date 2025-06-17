Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

Opção: a vista com 10% de desconto;
Opção: em duas vezes (preço da etiqueta);
Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$100,00).

#include <stdio.h>

int main() {
    double totalGasto;
    int opcaoPagamento;
    int numParcelas;
    double valorFinal;
    double valorParcela;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%lf", &totalGasto);

    if (totalGasto < 0) {
        printf("O total gasto nao pode ser negativo.\n");
        return 1;
    }

    printf("\nOpcoes de Pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Em 2 vezes (preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$100,00)\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcaoPagamento);

    switch (opcaoPagamento) {
        case 1:
            valorFinal = totalGasto * 0.90;
            printf("O valor total a pagar a vista e: R$ %.2lf\n", valorFinal);
            break;
        case 2:
            valorFinal = totalGasto;
            valorParcela = totalGasto / 2;
            printf("O valor total a pagar em duas vezes e: R$ %.2lf\n", valorFinal);
            printf("Serão 2 parcelas de: R$ %.2lf\n", valorParcela);
            break;
        case 3:
            if (totalGasto > 100.0) {
                printf("Digite o numero de parcelas (de 3 a 10): ");
                scanf("%d", &num

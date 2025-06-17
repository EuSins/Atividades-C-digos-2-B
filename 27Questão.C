Fazer um programa que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

#include <stdio.h>

int main() {
    double preco_original;
    double preco_inflacionado;

    printf("Digite o preco do produto: ");
    scanf("%lf", &preco_original);

    if (preco_original < 0) {
        printf("O preco nao pode ser negativo.\n");
        return 1;
    }

    if (preco_original < 100.0) {
        preco_inflacionado = preco_original * 1.10;
        printf("O preco original era R$ %.2lf.\n", preco_original);
        printf("O preco inflacionado em 10%% e: R$ %.2lf\n", preco_inflacionado);
    } else {
        preco_inflacionado = preco_original * 1.20;
        printf("O preco original era R$ %.2lf.\n", preco_original);
        printf("O preco inflacionado em 20%% e: R$ %.2lf\n", preco_inflacionado);
    }

    return 0;
}

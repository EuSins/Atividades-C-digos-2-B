Escreva um programa que receba as medidas dos três lados de um triângulo e determine se ele é isósceles, escaleno ou equilátero.

#include <stdio.h>

int main() {
    double lado1, lado2, lado3;

    printf("Digite o comprimento do primeiro lado do triangulo: ");
    scanf("%lf", &lado1);

    printf("Digite o comprimento do segundo lado do triangulo: ");
    scanf("%lf", &lado2);

    printf("Digite o comprimento do terceiro lado do triangulo: ");
    scanf("%lf", &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Os lados do triangulo devem ter medidas positivas.\n");
    } else if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
        printf("As medidas fornecidas nao formam um triangulo valido.\n");
    } else {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triangulo e EQUILATERO.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triangulo e ISOSCELES.\n");
        } else {
            printf("O triangulo e ESCALENO.\n");
        }
    }

    return 0;
}


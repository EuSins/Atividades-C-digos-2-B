Elabore um programa que pergunte um valor em graus Fahrenheit e imprima no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.

#include <stdio.h>

int main() {
    double fahrenheit;
    double celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2lf Fahrenheit equivalem a %.2lf Celsius.\n", fahrenheit, celsius);

    return 0;
}

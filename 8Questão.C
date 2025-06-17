Implemente um programa que calcule a raiz quadrada de um número digitado pelo usuário. (math.h)

#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    double raiz_quadrada;

    printf("Digite um numero para calcular a raiz quadrada: ");
    scanf("%lf", &numero);

    if (numero < 0) {
        printf("Nao e possivel calcular a raiz quadrada de um numero negativo no conjunto dos numeros reais.\n");
    } else {
        raiz_quadrada = sqrt(numero);

        printf("A raiz quadrada de %.2lf e: %.2lf\n", numero, raiz_quadrada);
    }

    return 0;
}

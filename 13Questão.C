Crie um programa que calcule a média ponderada de uma lista de notas. Os pesos devem ser atribuídos pelo usuário, bem como as notas.

#include <stdio.h>

int main() {
    int num_notas;
    int i;
    double nota;
    double peso;
    double soma_produtos = 0.0;
    double soma_pesos = 0.0;
    double media_ponderada;

    printf("Quantas notas voce deseja inserir? ");
    scanf("%d", &num_notas);

    if (num_notas <= 0) {
        printf("O numero de notas deve ser positivo.\n");
        return 1;
    }

    for (i = 1; i <= num_notas; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%lf", &nota);

        printf("Digite o peso para a nota %d: ", i);
        scanf("%lf", &peso);

        if (peso < 0) {
            printf("O peso nao pode ser negativo. Por favor, insira um peso valido.\n");
            return 1;
        }

        soma_produtos += (nota * peso);
        soma_pesos += peso;
    }

    if (soma_pesos == 0) {
        printf("A soma dos pesos nao pode ser zero. Nao e possivel calcular a media ponderada.\n");
    } else {
        media_ponderada = soma_produtos / soma_pesos;
        printf("A media ponderada das notas e: %.2lf\n", media_ponderada);
    }

    return 0;
}

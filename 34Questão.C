Fazer um programa que pergunta o nome, o endereço, o telefone e a idade de uma pessoa e monta um string com a seguinte frase:
"Seu nome é ..., você tem ... anos, mora na rua ... e seu telefone é ... ."

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char endereco[200];
    char telefone[20];
    int idade;

    printf("Digite o nome completo: ");
    scanf(" %99[^\n]", nome);

    printf("Digite o endereco: ");
    scanf(" %199[^\n]", endereco);

    printf("Digite o telefone: ");
    scanf(" %19[^\n]", telefone);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("\nSeu nome e %s, voce tem %d anos, mora na rua %s e seu telefone e %s.\n", nome, idade, endereco, telefone);

    return 0;
}

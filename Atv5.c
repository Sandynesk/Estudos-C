// Verificação de notas: Crie um programa que peça ao usuário para inserir sua nota
// em uma prova e imprima se ele foi aprovado ou reprovado (considerando que a nota mínima para aprovação é 7).

#include <stdio.h>

int main() {
    float nota;

    printf("Digite a sua nota em uma prova: ");
    scanf("%f", &nota);

    if (nota >= 7) {
        printf("Parabéns! Você foi aprovado.\n");
    } else {
        printf("Você foi reprovado.\n");
    }

    return 0;
}
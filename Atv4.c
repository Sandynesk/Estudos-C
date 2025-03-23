//Verificação de temperatura: Crie um programa que peça ao usuário para inserir uma temperatura
// e verifique se está frio, agradável ou quente.

#include <stdio.h>

int main() {
    float temperatura;

    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < 0) {
        printf("A temperatura é fria.\n");
    } else if (temperatura >= 0 && temperatura <= 20) {
        printf("A temperatura é agradável.\n");
    } else {
        printf("A temperatura é quente.\n");
    }

    return 0;
}
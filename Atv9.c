//Tabuada de um número: Crie um programa que peça ao usuário para
// inserir um número e imprima a tabuada desse número.

#include <stdio.h>

int main() {
    int numero, i;
    printf("Insira um número: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
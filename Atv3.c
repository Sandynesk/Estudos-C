// Verificação de divisibilidade: Crie um programa que peça ao usuário para inserir dois números
// e verifique se o primeiro número é divisível pelo segundo.

#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0) {
        printf("Um dos números é zero.\n");
    } else if (num1 % num2 == 0) {
        printf("O primeiro número é divisível pelo segundo.\n");
    } else {
        printf("O primeiro número não é divisível pelo segundo.\n");
    }

    return 0;
    
}
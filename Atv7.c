//Cálculo do fatorial de um número: Crie um programa que peça ao usuário para inserir um número 
//e calcule o fatorial desse número.


#include <stdio.h>

int main(){
    int num, fatorial = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        fatorial *= i;
    }
    printf("O fatorial de %d é: %d\n", num, fatorial);


    return 0;
}
//Soma dos números em uma lista: Crie um programa que some todos os números em uma lista.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma;
    int *numeros;
    int n, i;
    
    printf("Informe a quantidade de numeros: ");
    scanf("%d", &n);
    numeros = (int*) malloc(n * sizeof(int));
    printf("Informe os numeros: ");
    for(i=0; i<n; i++){
        scanf("%d", &numeros[i]);
    }
    soma = 0;
    for(i=0; i<n; i++){
        soma += numeros[i];
    }
    printf("Soma dos numeros: %d\n", soma);
    free(numeros);



    return 0;
}
//Contagem regressiva: Crie um programa que faça uma contagem regressiva de 10 até 1.

#include <stdio.h>
#include <unistd.h> // Para usar a função sleep()
int main() {
    int i;
    for (i = 10; i >= 0; i--)
    {
        printf("%d...\n", i);
        sleep(1); 
    }
    

    return 0;
} 
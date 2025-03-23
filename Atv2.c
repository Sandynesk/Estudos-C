
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Insira dois numeros:\n ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("o %d e maior\n", num1);
    }else if (num1 == num2)
    {
        printf("Os dois numeros sao iguais\n");
    }else{
        printf("o %d e maior\n", num2);
    }
    
    

    return 0;
}
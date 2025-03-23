#include <stdio.h>

int main(){
    int idade;

    printf("Digite uma idade valida:\n ");
    scanf("%d", &idade);

    if (idade == 0 || idade <= -1 || idade >= 120)
    {
        printf("Idade invalida. Informe uma idade entre 1 e 120 anos.");
        return 0;
    }
    

    if( idade >= 18 && idade <= 60){
        printf("Esta e a idade de um adulto.");
    }
    else if (idade > 60)
    {
        printf("Esta e a idade de um idoso.");
    }
    
    else{
        printf("Esta nao e a idade de um adulto. Se trata de um menor de idade");
        }

    return 0;        
}
#include <stdio.h>

int main(){
    int num1;
    int num2;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("A resposta e %d", resultado);



    return 0;
}


#include <stdio.h>

int main(){
    float nota1, nota2, nota3, resultado;
        printf("Entre com o valor da primeira nota:\n");
        scanf("%f", &nota1);

        printf("Entre com o valor da segunda nota:\n");
        scanf("%f", &nota2);

        printf("Entre com o valor da terceira nota:\n");
        scanf("%f", & nota3);

        resultado = (nota1 + nota2 + nota3)/3;

        printf("A media das tres notas e:\n %.2f",resultado);
      

    return 0;
}
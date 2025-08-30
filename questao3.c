#include <stdio.h>

int main() {
    int valor, nota100, nota50, nota20, nota10, nota5, nota2;
    
    printf("Digite o valor a sacar: ");
    scanf("%d", &valor);
    
    
    if (valor < 2 || valor %2==1) {
        printf("Maquina incapaz de pagar esse valor com as cedulas.\n");
    } else {
    	
        nota100 = valor / 100;
        valor = valor % 100;

        nota50 = valor / 50;
        valor = valor % 50;

        nota20 = valor / 20;
        valor = valor % 20;

        nota10 = valor / 10;
        valor = valor % 10;

        nota5 = valor / 5;
        valor = valor % 5;

        nota2 = valor / 2;
        valor = valor % 2;

    
        printf("Cedulas sacadas:\n");
        if (nota100 > 0) printf("%d notas de 100\n", nota100);
        if (nota50 > 0)  printf("%d notas de 50\n", nota50);
        if (nota20 > 0)  printf("%d notas de 20\n", nota20);
        if (nota10 > 0)  printf("%d notas de 10\n", nota10);
        if (nota5 > 0)   printf("%d notas de 5\n", nota5); 
        if (nota2 > 0)   printf("%d notas de 2\n", nota2);
    }
    
    return 0;
}
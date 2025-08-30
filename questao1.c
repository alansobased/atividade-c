#include <stdio.h>

int main () {
	float l1, l2, l3;
	
	printf("Digite o primeiro lado do triangulo: \n");
    scanf("%f", &l1);
    printf("Digite o segundo lado: \n");
    scanf("%f", &l2);
    printf("Digite o terceiro lado: \n");
    scanf("%f", &l3);
    
    if (l1+l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1 && l1!=0 && l2!=0 && l3!=0) {
        printf("Forma um triangulo valido.\n");

        if (l1 == l2 && l2 == l3) {
            printf("Triangulo Equilatero\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Triangulo invalido.\n");
    }



	
	return 0;
}
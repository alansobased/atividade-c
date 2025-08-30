#include <stdio.h>

int main() {
    float p, a, imc;

    printf("digite seu peso (kg): ");
    scanf("%f", &p);
    printf("digite sua altura (1.84): ");
    scanf("%f", &a);

    imc = p / (a * a);

	printf("imc: %f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc < 35) {
        printf("Obesidade grau I\n");
    } else if (imc < 40) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }
    
    return 0;
}
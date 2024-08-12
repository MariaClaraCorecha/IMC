#include <stdio.h>

int main() {
    float imc, altura, peso;
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Digite seu peso: \n");
    scanf("%f", &peso);
    
    imc = peso / (altura * altura);
    
    printf("Seu IMC eh: %.2f\n", imc);
    
    if (imc <= 16.9) {
        printf("Voce foi classificado como abaixo do peso.\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Voce foi classificado como peso ideal.\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Voce foi classificado como acima do peso.\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Voce foi classificado como Obeso grau 1.\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Voce foi classificado como Obeso grau 2.\n");
    } else if (imc >= 40) {
        printf("Voce foi classificado como obeso grau 3, Obesidade mórbida.\n");
    }
    
    return 0;
}


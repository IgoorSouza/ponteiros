#include<stdio.h>

void separateNumber(double *numberPointer, double *decimalPointer, int *intPointer) {
    *intPointer = int(*numberPointer);
    *decimalPointer = *numberPointer - *intPointer;
}

int main () {
    double number, decimalPart, *numberPointer = &number, *decimalPointer = &decimalPart;
    int intPart, *intPointer = &intPart;

    printf("Digite um numero real: ");
    scanf("%lf", &number);
   
    separateNumber(numberPointer, decimalPointer, intPointer);
   	
    printf("Parte inteira: %d\n", *intPointer);
    printf("Parte decimal: %.3lf\n", *decimalPointer);
    
    return 0;
}

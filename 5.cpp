#include<stdio.h>

void calc (int *arrayPointer, int *minPointer, int *maxPointer, int *lengthPointer) {
    *minPointer = *arrayPointer;
    for (int i = 0; i < *lengthPointer; i++) {
        if (*arrayPointer < *minPointer) *minPointer = *arrayPointer;
        if (*arrayPointer > *maxPointer) *maxPointer = *arrayPointer;
        *arrayPointer++;
    }
}

int main() {
    int length, *lengthPointer = &length;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", lengthPointer);
    
    int array[length], *arrayPointer = array, min, *minPointer = &min, max, *maxPointer = &max;
    
    for (int i = 0; i < *lengthPointer; i++) {
        printf("Digite um numero: ");
        scanf("%d", &array[i]);
    }
    
    calc(arrayPointer, minPointer, maxPointer, lengthPointer);
    
    printf("Menor numero do vetor: %d\n", *minPointer);
    printf("Maior numero do vetor: %d", *maxPointer);
    
    return 0;
}

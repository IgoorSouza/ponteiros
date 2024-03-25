#include<stdio.h>

int main () {
    float array[10], *pointer = array;
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", pointer);
        pointer++;
    }
    
    return 0;
}

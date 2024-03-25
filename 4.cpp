#include<stdio.h>
#define pi 3.14

void calc(double *radiusPointer, double *areaPointer, double *volumePointer) {
    *areaPointer = 4 * pi * (*radiusPointer * *radiusPointer);
    *volumePointer = 4 * pi * (*radiusPointer * *radiusPointer * *radiusPointer) / 3;
}

int main () {
    double radius, *radiusPointer = &radius, area, *areaPointer = &area, volume, *volumePointer = &volume;
    
    printf("Informe o raio da esfera: ");
    scanf("%lf", &radius);
    
    calc(radiusPointer, areaPointer, volumePointer);
    
    printf("Area da esfera: %.2lf\n", *areaPointer);
    printf("Volume da esfera: %.2lf\n", *volumePointer);
    
    return 0;
}

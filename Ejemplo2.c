/*Obtener el resultado de la siguiente ecuación
r = a / b;*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    float a, b, r;
    printf("Ingrese el valor de a: ");
    scanf("%f", &a);
    printf("Ingrese el valor de b: ");
    scanf("%f", &b);
    r = a / b;
    printf("La división entre %.2f / %.2f = %.2f", a, b, r);

    return 0;
}

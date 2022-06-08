/*Sumar dos numeros enteros */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* variables */
    //Sintaxis de declaración de variable
    // tipo de dato nombre de variable;
    int num1, num2, suma;
    printf("Escriba un #: ");
    scanf("%i", &num1);
    printf("Escriba otro #: ");
    scanf("%i", &num2);
    suma = num1 + num2;
    printf("La suma de %i + %i = %i\n", num1, num2, suma);

    return 0;
}

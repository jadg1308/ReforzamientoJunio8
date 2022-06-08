/*Leer los datos de una persona tales como su nombre, sexo y año nacimiento,
calcule la edad e imprima sus datos completos.*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    char nombre[50];
    char sexo[2];
    int anioNac;
    int edad;
    printf("Dime tu nombre: ");
    scanf(" %[^\n]", nombre);
    printf("Dime en que año naciste: ");
    scanf("%i", &anioNac);
    printf("Dime tu sexo Masculino (M) o Femenino (F): ");
    scanf(" %[^\n]", sexo);
    
    edad = 2022 - anioNac;

    printf("Nombre: %s\n", nombre);
    printf("Sexo: %s \n", sexo);
    printf("Año de Nacimiento: %i \n", anioNac);
    printf("Edad: %i \n", edad);
    return 0;
}

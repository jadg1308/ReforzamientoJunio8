/*Calcular el promedio de un estudiante que posee
4 asignaturas */

#include<stdio.h>

struct {
    char nombre[50];
    int nota[4];
}estudiante;

//variable global
float promedio;

int main(int argc, char const *argv[])
{
    /* variable local */
    int suma=0;
    printf("Nombre del estudiante: ");
    scanf(" %[^\n]", estudiante.nombre);
    printf("Escriba las notas obtenidas \n");
    printf("Taller Lectura Comprensiva: ");
    scanf("%i", &estudiante.nota[0]);
    printf("Calculo 1: ");
    scanf("%i", &estudiante.nota[1]);
    printf("Fundamentos TIC: ");
    scanf("%i", &estudiante.nota[2]);
    printf("MetPro: ");
    scanf("%i", &estudiante.nota[3]);
    suma = estudiante.nota[0] + estudiante.nota[1] + estudiante.nota[2] + estudiante.nota[3];

    promedio = suma / 4;

    printf("El promedio es %.2f", promedio);

    return 0;
}

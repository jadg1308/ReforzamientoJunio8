/* Leer los datos de un estudiante
y evaluar si su nota es Deficiente 0 - 59
aceptable 60 - 69, bueno 70 - 79 , muy bueno 80 - 89
o excelente de 90 -100

Nombre,
carrera
, asignatura con su nota

Maria Regina
ISI
    - MetPro
    - TLC
    - Calc 1
    - Genero
*/

#include <stdio.h>

#define MAXTEXT 50
#define MAX 100

typedef struct
{
    char asignatura[MAXTEXT];
    int nota;
} detNota;

typedef struct
{
    char nombre[MAXTEXT];
    char carrera[MAXTEXT];
    detNota notas[MAX];
    int cantNotas;
} estudiante;

estudiante listado[MAX];

int fila = 0;

void agregarEst();
char *evaluarNota(int nota);
void imprimirLista();

void agregarEst()
{
    int op, pos = 0;
    printf("Estudiante: ");
    scanf(" %[^\n]", listado[fila].nombre);
    printf("Carrera: ");
    scanf(" %[^\n]", listado[fila].carrera);
    do
    {
        printf("Asignatura: ");
        scanf(" %[^\n]", listado[fila].notas[pos].asignatura);
        printf("Nota Final: ");
        scanf("%i", &listado[fila].notas[pos].nota);
        pos++;
        listado[fila].cantNotas = pos;
        printf("Desea agregar otro registro? 1. si 0. No ");
        scanf("%i", &op);
    } while (op != 0);
}


void imprimirLista()
{
    int cantNotas, nota;
    printf("Datos del estudiante\n");
    for (int i = 0; i < fila; i++)
    {
        printf("Nombre: %s\n ", listado[i].nombre);
        printf("Carrera %s\n", listado[i].carrera);
        cantNotas = listado[i].cantNotas;
        printf("\t Asignatura \t Nota  \t Cualitativo\n ");
        for (int j = 0; j < cantNotas; j++)
        {
            nota = listado[i].notas[j].nota;
            printf(" %s \t %i \t %s\n", listado[i].notas[j].asignatura, nota, evaluarNota(nota));
        }
        printf("==============================================\n");
    }
}


char *evaluarNota(int nota)
{
    if (nota >= 0 && nota <= 50)
    {
        return "Deficiente";
    }
    else if (nota >= 60 && nota <= 69)
    {
        return "Aprobado";
    }
    else if (nota >= 70 && nota <= 79)
    {
        return "Bueno";
    }
    else if (nota >= 80 && nota <= 89)
    {
        return "Muy Bueno";
    }
    else if (nota >= 90 && nota <= 100)
    {
        return "Excelente";
    }
}

void menu();
void menu()
{
    int op;
    do
    {
        printf("1. Agregar \n");
        printf("2. Mostrar \n");
        printf("3. Salir\n");
        printf("Opcion: ");
        scanf("%i", &op);
        switch (op)
        {
        case 1:
            agregarEst();
            fila++;
            break;
        case 2:
            imprimirLista();
            break;
        case 3:
            break;
        default:
            printf("Opcion invalida...\n"); break;
        }
    } while (op != 3);
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}

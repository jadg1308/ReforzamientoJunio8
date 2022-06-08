/* Almacenar los datos de un trabajador
como su nombre, cargo, salario. Aumentar en un 5%
el salario del trabajador con un salario menor de 5 mil*/

#include <stdio.h>

typedef struct
{
    char nombre[50];
    char cargo[50];
    float salario;
} empleado;

empleado lista[100];
int fila = 0;

void agregarEmpleado(int pos);
void agregarEmpleado(int pos)
{
    printf("Nombre: ");
    scanf(" %[^\n]", lista[pos].nombre);
    printf("Cargo: ");
    scanf(" %[^\n]", lista[pos].cargo);
    printf("Salario: ");
    scanf("%f", &lista[pos].salario);
}

float aumento(float salario);
float aumento(float salario)
{
    return salario * 0.05;
}

void aplicarAumento();
void aplicarAumento()
{
    float salario, aum, nuevoSalario;
    int pos = 0;
    while (pos < fila)
    {
        aum= 0;
        salario = lista[pos].salario;
        if (salario < 5000)
        {
            aum = aumento(salario);
        }
        nuevoSalario = salario + aum;
        lista[pos].salario = nuevoSalario;
        pos++;
    }
}

void mostrarEmpleado();
void mostrarEmpleado()
{
    for (int pos = 0; pos < fila; pos++)
    {
        printf("Empleado: %s\n", lista[pos].nombre);
        printf("Cargo: %s\n", lista[pos].cargo);
        printf("Salario: %.2f\n", lista[pos].salario);
    }
}

void menu();
void menu()
{
    int op;
    do
    {
        printf("1. Agregar empleado \n");
        printf("2. Mostrar Lista de empleado\n");
        printf("3. Aplicar el aumento \n");
        printf("4. Salir \n");
        printf("Escriba el # de la opcion deseada: ");
        scanf("%i", &op);
        switch (op)
        {
        case 1:
            agregarEmpleado(fila);
            fila++;
            break;
        case 2:
            mostrarEmpleado();
            break;
        case 3:
            aplicarAumento();
            break;
        case 4:
            break;
        default:
            printf("Error opcion invalida. Presione 1 - 4\n");
            break;
        }
    } while (op != 4);
}

int main(int argc, char const *argv[])
{
    menu();

    return 0;
}

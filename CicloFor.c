/*Mostrar los numeros del 1 al 10 */
#include <stdio.h>

void mostrarNum();

int main(int argc, char const *argv[])
{
    /* code */
    mostrarNum();
    return 0;
}

void mostrarNum(){
    for(int cont = 1; cont <= 10; cont++){
        printf("%i\n", cont);
    }
}
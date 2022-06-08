/*Imprimir la tabla de multiplicar de un #*/
#include <stdio.h>

void mostrarTabla(int num);
void mostrarTabla(int num){
    int prod;
    for(int cont = 1; cont <=12; cont++){
        prod = num * cont;
        printf("%i * %i = %i \n", num, cont, prod);
    }
}

void solicitarNum();
void solicitarNum(){
    int num;
    printf("Dime un numero: ");
    scanf("%i", &num);
    mostrarTabla(num);
}

int main(int argc, char const *argv[])
{
    solicitarNum();
    return 0;
}

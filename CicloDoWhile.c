#include<stdio.h>

void mostrarNum();

int main(int argc, char const *argv[])
{
    /* code */
    mostrarNum();
    return 0;
}

void mostrarNum(){
    int cont = 1;
    do{
        printf("%i\n", cont);
        cont++;
    }while(cont < 1);
}
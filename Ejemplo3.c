/*Leer una letra e imprimir la siguiente letra */
#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    char letra;
    char sigLetra;
    printf("Dime un letra: ");
    scanf("%c", &letra);
    sigLetra = letra +1;
    printf("A %c le sigue %c ", letra, sigLetra);

    return 0;
    
}

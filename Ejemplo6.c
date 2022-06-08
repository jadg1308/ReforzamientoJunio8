/*Leer un numero e imprimir su antecesor y su sucesor*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, ant, suc;
    printf("Dime un numero: ");
    scanf("%i", &num);
    ant = num;
    ant --;
    suc = num;
    suc ++; 
    printf("El numero ingresado fue %i \n", num);
    printf(" Su antesor es  %i\n", ant);
    printf(" Su sucesor es %i \n",  suc);

   /* ant = num;
    ant -= 1; // ant = ant - 1;
    suc = num;
    suc += 1; // suc = suc +1;
    printf("El antecesor de %i es  %i\n", num, ant);
    printf("El sucesor de %i es %i \n", num, suc);*/

    
    return 0;
}

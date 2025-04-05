#include <stdio.h>

int main()
{
    int a = 10;
    int *punt = &a;
    printf("Contenido del puntero: %d ", *punt);
    printf("\nDireccion almacenada por el puntero: %p" , punt);
    printf("\nDireccion de memoria la variable: %p", &a);
    printf("\nDireccion de memoria del puntero: %p", &punt);
    printf("\nTamaño en memoria de la variable : %lu bytes", sizeof(a));
    return 0;
}
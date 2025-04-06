#include <stdio.h>
//funciones
int cuadrado(int x);
void cuadrado_void (int x, int *resultado);
void mostrar_variable (int x);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);
void procesar_pares();

int main()
{
    procesar_pares();
    return 0;
}

//a) función que devuelva el cuadrado de un número
int cuadrado(int x)
{
    return (x*x);
}

//b) función anterior, pero devolviendo un tipo void 
void cuadrado_void (int x, int *resultado)
{
    *resultado = x * x;
}

// c) funcion que muestre por pantalla la dirección y el contenido de la variable  
void mostrar_variable (int x)
{
    printf("Contenido: %d\n",x);
    printf("Direccion: %p", (void*)&x);
}

// d Intercambiar valores entre dos variables
void invertir(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) ordenar dos variables: menor en a, mayor en b
void ordenar(int *a, int *b)
{
    if(*a>*b){
        invertir(a,b);
    }
}

//f) uso de funciones anteriores para leer pares de valores e imprimir
void procesar_pares(){
    int x, y, resultado;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &x, &y);
    printf("\nCuadrado de %d : %d \n",x,cuadrado(x));
    cuadrado_void(x,&resultado);
    printf("Cuadrado de %d (void): %d\n",x,resultado);

    printf("\nMostrar variable:\n");
    mostrar_variable(x);

    printf("\nInvertir: \nAntes: x=%d, y=%d\n",x,y);
    invertir(&x,&y);
    printf("Despues: x=%d, y=%d\n",x,y);

    printf("\nOrdenar: \nAntes: x=%d, y=%d\n",x,y);
    ordenar(&x,&y);
    printf("Despues: x=%d, y=%d",x,y);

}
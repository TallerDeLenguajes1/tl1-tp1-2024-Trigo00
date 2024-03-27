#include <stdio.h>

int main(){

    int numero = 15;
    int *pNumero = &numero;

    printf("Hola mundo\n");
    printf("El contenido del puntero: %d\n", *pNumero);
    printf("La direccion de memoria almacenada por el puntero: %p\n", pNumero);
    printf("La direccion de memoria de la variable: %p\n", &numero);
    printf("La direccion de memoria del puntero: %p\n", &pNumero);
    printf("El tamanio de memoria utilizado por la variable: %zu bytes\n", sizeof(numero));
    printf("El tamanio de memoria utilizado por el puntero: %zu bytes\n", sizeof(pNumero));


    return 0;
}
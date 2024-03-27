#include <stdio.h>

//Funcion apartado A (devolviendo un tipo int)
int devolverCuadradoA(int numero);

//Funcion apartado B (devolviendo un tipo void)
void devolverCuadradoB(int numero);

//Funcion apartado C (Lo hice que reciba un entero, a modo de facilitar las cosas)
void datosVariable(int var);

//Funcion apartado D
void invertir(int a, int b);

//Funcion apartado E
void orden(int a, int b);

int main(){

    int num = 8;
    int resultado;

    resultado = devolverCuadradoA(num);

    printf("%d", resultado);

    devolverCuadradoB(num);

    datosVariable(2);

    invertir(2,4);

    orden(4,3);

    return 0;
}

int devolverCuadradoA(int numero){
    return numero * numero;
}

void devolverCuadradoB(int numero){
    printf("\nEl cuadrado de %d es: %d", numero, numero * numero);
}

void datosVariable(int var){
    printf("\nLa direccion de memoria de la variable es: %p", &var);
    printf("\nEl contenido de la variable es: %d", var);
}

void invertir(int a, int b){
    int varAux = a;

    printf("\nEl valor del primer parametro es: %d", a);
    printf("\nEl valor del segundo parametro es: %d", b);

    a = b;
    b = varAux;

    printf("\nLuego de invertir, el valor del primer parametro es: %d", a);
    printf("\nLuego de invertir, el valor del segundo parametro es: %d", b);

}

void orden(int a, int b){

    int mayor, menor;

    if(a > b){
        printf("\nEl valor de a(menor) es: %d", b);
        printf("\nEl valor de b(mayor) es: %d", a);
    }else if(a < b){
        printf("\nEl valor de a(menor) es: %d", a);
        printf("\nEl valor de b(mayor) es: %d", b);
    }else{
        printf("\nLos valores son iguales: %d", a);
    }

}
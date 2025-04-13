#include <stdio.h>

int cuadrado(int num); //declaramos función
void cuadradoVoid(int num, int *resultado);
void invertir(int *a,int *b);
void orden(int *a, int*b);

int main(){
    int numero = 5;
    int valor1 = 8, valor2=2;
    int resultado1, resultado2;
    resultado1 = cuadrado(numero);
    cuadradoVoid(numero, &resultado2);//pasamos como parámetro la dirección de memoria de la variable
    printf("Numero: %d - resultado 1: %d - resultado 2: %d \n", numero, resultado1, resultado2);
    
    printf("Contenido de variable: %d Direccion: %p", numero, &numero); //mostramos contenido y direcc de vble

    printf("\nValor 1: %d - Valor 2: %d", valor1, valor2); //mostramos valores originales
    invertir(&valor1,&valor2); 
    printf("\n--Invertidos \n\tValor 1: %d - Valor 2: %d", valor1, valor2);
    orden(&valor1,&valor2);
    printf("\n--Orden \n\tValor 1: %d - Valor 2: %d", valor1, valor2);
    
    return 0;

}

int cuadrado(int num){ //definimos función
    return num * num;
}

void cuadradoVoid(int num, int *resultado){ //pasamos como parametro el puntero
    *resultado = num*num; //al contenido de lo que apunta el puntero le cambiamos el valor
}

void invertir(int *a,int *b){
    int valorA = *a, valorB = *b; //guardamos los valores originales de a y b para no perderlos
    *a = valorB; //accedemos al contenido de a y lo modificamos. 
    *b = valorA;
}

void orden(int *a, int*b){
    int mayor, valorA = *a, valorB = *b; //guardamos valores
    if(valorA>valorB){ //determinamos mayor
        *a = valorA; //asignamos al contenido de a el mayor
    }else if (valorB>valorA)
    {
        *a = valorB;
    }
}




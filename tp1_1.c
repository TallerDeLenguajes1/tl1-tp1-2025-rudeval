#include <stdio.h>

int main(){
    printf("hola mundo \n");
    int vble = 5; //declaramos e inicializamos vble
    int *pVble = &vble; //declaramos e inicializamos puntero que apunte a vble

    printf("Contenido del puntero: %d \n" , *pVble);
    printf("Direccion de memoria almacenada por el puntero: %p \n" , pVble);
    printf("Direccion de memoria de la vble: %p \n" , &vble);
    printf("Direccion de memoria del puntero: %p \n" , &pVble);
    printf("Tamaño de memoria utilizado por la vble usando sifeof: %d bytes \n" , sizeof(vble));
    return 0;
}

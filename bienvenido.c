#include <stdio.h>

int main(){
    
    char nombre[50];
    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);
    printf("Hola, %s! Bienvenido.\n", nombre);
    
    getch ();
    return 0;
}

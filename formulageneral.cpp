/* 
Gael Morales Hernández
222689665
Tarea 4 Operadores.
*/

#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float d = 12.5, e = 2.5;

    printf("\tOPERADORES ARITMETICOS\n");
    printf("Los valores son a = 10, b = 3, d = 12.5, e = 2.5\n");

    printf("\nSuma: a + b = %d", a + b);
    printf("\nResta: a - b = %d", a - b);
    printf("\nMultiplicacion: a * b = %d", a * b);
    printf("\nPotencia: a^2 = %d", a * a);
    printf("\nDivision: d / e = %.2f", d / e);
    printf("\nModulo: a %% b = %d", a % b);

    printf("\n\n\tOPERADORES DE ASIGNACION\n");
    a = b;
    printf("Asignacion Simple: a = b -> %d\n", a);
    a *= b;
    printf("Asignacion compuesta: a *= b -> %d\n", a);
    a /= b;
    printf("Asignacion compuesta: a /= b -> %d\n", a);
    a %= b;
    printf("Asignacion compuesta: a %%= b -> %d\n", a);
    a -= b;
    printf("Asignacion compuesta: a -= b -> %d\n", a);
    a += b;
    printf("Asignacion compuesta: a += b -> %d\n", a);

    printf("\n\tOPERADORES DE INCREMENTO/DECREMENTO\n");
    printf("Incremento: a++ = %d\n", a++);
    printf("Decremento: a-- = %d\n", a--);

    printf("\n\tOPERADORES RELACIONALES\n");
    printf("Igual que: a == b -> %d\n", a == b);
    printf("No igual que: a != b -> %d\n", a != b);
    printf("Mayor que: a > b -> %d\n", a > b);
    printf("Menor que: a < b -> %d\n", a < b);
    printf("Mayor o igual que: a >= b -> %d\n", a >= b);
    printf("Menor o igual que: a <= b -> %d\n", a <= b);

    printf("\n\tOPERADORES LOGICOS\n");
    printf("AND (a && b): %d\n", (a && b));
    printf("OR (a || b): %d\n", (a || b));
    printf("NOT (!a): %d\n", (!a));

    return 0;
}

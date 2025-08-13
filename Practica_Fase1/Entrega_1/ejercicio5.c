/*
Implementar una solución que haga la suma entre dos números enteros sin hacer la operación de manera directa. 
Esto quiere decir que para hacer la suma entre 4 y 3, las operaciones resultantes deberán ser 4+1+1+1.

La solución debe ser capaz de sumar cualquier número entero, positivo y negativo.
-----------------
Nombre y Apelido: Nicolas Savone
Usuario Github: Nico44S
*/

#include <stdio.h>

// Para compilar este programa usar: gcc ejercicio5.c -o ejercicio5.c

int main ()
{
    int Numero1 = 0;
    int Numero2 = 0;
    int i;

    printf ("Ingrese un numero entero: ");
    scanf ("%d", &Numero1);
    printf ("Ingrtese otro numero entero: ");
    scanf ("%d", &Numero2);

    for (i = 0; i < Numero2; i++)
    {
        Numero1 += 1;
        printf ("Suma lenta = %d\n", Numero1);
    }
     for (i = 0; i > Numero2; i--)
    {
        Numero1 -= 1;
        printf ("Suma lenta = %d\n", Numero1);
    }

    return 0;
}
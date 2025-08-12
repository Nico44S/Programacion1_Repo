/*
Implementar un algoritmo que reciba un número entero e indique si el mismo es positivo, negativo o cero.


 * Retornar `-1` si es negativo.
 * Retornar `0` si es cero.
 * Retornar `1` si es positivo.
-----------------
Nombre y Apelido: Nicolas Savone
Usuario Github: Nico44S
*/

#include <stdio.h>

// Para compilar este programa usar: gcc ejercicio3.c -o ejercicio3.c

int main ()
{
    int Numero;
    printf ("Ingrese un numero entero: ");
    scanf ("%d", &Numero);
    if (Numero > 0) 
    {
        printf ("1");
    }
    else if (Numero < 0)
    {
        printf ("-1");
    }
    else 
    {
        printf ("0");
    }
    
    return 0;
}
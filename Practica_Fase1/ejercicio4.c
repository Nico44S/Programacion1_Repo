/*
Implementar un algoritmo que retorne:

 * Retornar `-1` si el primero es menor que el segundo
 * Retornar `0` si son iguales
 * Retornar `1` si el primero es mayor que el segundo
 
``` C
int compara(int numero, int otro_numero):
```
-----------------
Nombre y Apelido: Nicolas Savone
Usuario Github: Nico44S
*/

#include <stdio.h>

// Para compilar este programa usar: gcc ejercicio4.c -o ejercicio4.c

int main ()
{
    int Numero1;
    int Numero2;

    printf ("Ingrese un numero entero: ");
    scanf ("%d", &Numero1);
    printf ("Ingrese otro numero entero: ");
    scanf ("%d", &Numero2);
    
    if (Numero1 > Numero2)
    {
        printf ("1");
    }
    else if (Numero2 > Numero1)
    {
        printf ("-1");
    }
    else 
    {
        printf ("0");
    }

    return 0;
}
/*
Se quiere transformar temperaturas en grados Fahrenheit a grados centígrados y viceversa.

Implementar el algoritmo para convertir la temperatura en grados centígrados en Fahrenheit como 
un número decimal, utilice esta fórmula para calcular los grados centígrados y retorne el resultado obtenido. Y viceversa.
-----------------
Nombre y Apelido: Nicolas Savone
Usuario Github: Nico44S
*/

#include <stdio.h>

// Para compilar este programa usar: gcc ejercicio2.c -o ejercicio2.c

int main ()
{
    float Grados;
    float Conversion_Grados;
    int Selector_Tipo_Grado;
    printf ("ingresar la cantidad de grados que quieres convertir: ");
    scanf ("%f", &Grados);
    printf ("\nPresione 0 si son grados celcius, o 1 si son grados fahrenheit: ");
    scanf ("%d", &Selector_Tipo_Grado);
    if (Selector_Tipo_Grado == 0)
    {
        Conversion_Grados = (Grados * (9 / 5)) + 32;
        printf ("\n %.2f grados celcius equivalen a %.2f grados fahrenheit. \n", Grados, Conversion_Grados); 
    }
    else if (Selector_Tipo_Grado == 1)
    {
        Conversion_Grados = (Grados - 32)  * (5/9);
        printf ("%.2f grados fahrenheit equivalen a %.2f grados celcius. \n", Grados, Conversion_Grados);
    }
    else 
    {
        printf ("La opcion ingresada no es correcta, porfavor intente denuevo. \n");
    }
    
    return 0;
}
/*
Escribir un algoritmo que, mediante restas sucesivas, obtenga el valor del 
cociente y el resto de dos números enteros.
-----------------
Nombre y Apelido: Nicolas Savone
Usuario Github: Nico44S
*/

#include <stdio.h>
#include <stdbool.h>

// Para compilar este programa usar: gcc ejercicio5.c -o ejercicio5.c

int main ()
{
    int Numero1 = 0;
    int Numero2 = 0;
    int i = 0;
    int Contador_Cociente = 0;
    int Resto = 0;
    bool Signo_Cociente = true;

    printf ("ingrese un numero entero: ");
    scanf ("%d", &Numero1);
    printf ("ingrese otro numero entero: ");
    scanf ("%d", &Numero2);

    int Division_Sucesiva = Numero1;

    if (Numero2 == 0)
    {
        printf ("No se puede hacer una division por cero, porfavor intente de nuevo.");
    }
    else if (Numero1 < 0 && Numero2 < 0)
    {
        Numero1 *= -1;
        Numero2 *= -1;
    }
    else if (Numero1 < 0)
    {
        Numero1 *= -1;
        Signo_Cociente = false;
    }
    else if (Numero2 < 0)
    {
        Numero2 *= -1;
        Signo_Cociente = false;
    }

    printf ("%d\n", Division_Sucesiva);
    
    while (Division_Sucesiva >= Numero2)
    {
        Division_Sucesiva -= Numero2;
        Contador_Cociente += 1;
        printf ("%d\n", Division_Sucesiva);
    }

    if (Signo_Cociente == false)
    {
        Contador_Cociente *= -1;
    }

    printf ("Cociente = %d\nReseto %d", Contador_Cociente, Division_Sucesiva);

    return 0;
}

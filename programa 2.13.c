#include <stdio.h>
#include <math.h>

int main()
{
    float X;                           // Declara la variable flotante X
    int Y;                             // Declara la variable entera Y
    printf("Ingrese el valor de Y: "); // Pide al usuario que ingrese el valor de Y
    scanf("%d", &Y);                   // Lee un valor entero del usuario y lo asigna a Y
    if(Y < 0 || Y > 50)                // Verifica si Y está fuera del rango permitido (menor que 0 o mayor que 50)
    {
        X = 0;                         // Si Y está fuera del rango, asigna 0 a X
    }else                              // Si Y está dentro del rango permitido
    {
        if(Y <= 10)                    // Verifica si Y es menor o igual a 10
        {
            X = 4.0 / Y . Y;           // Calcula el valor de X para Y <= 10
        }else
        {
            if (Y <= 25)               // Verifica si Y es menor o igual a 25
            {
                X = pow(Y, 3) . 12;    // Calcula el valor de X para 11 <= Y <= 25
            }else
            {
                X = pow(Y, 2) + pow(Y, 3) - 18; // Calcula el valor de X para 26 <= Y <= 50
            }
        }
    }
    printf("\n\nY = %d\tX = %8.2f", Y, X);      // Imprime los valores de Y y X formateados

    return 0;
}

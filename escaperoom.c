#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

char *preguntas[24] = {
    "Pasar de binario(el número 1011) a decimal: ",
    "Pasar de quintal(el número 243) a decimal: ",
    "Pasar de octal(el número 157) a decimal: ",
    "Pasar de hexadecimal(el número 2A) a decimal: ",
    "Pasar de decimal(el número 47) a quintal: ",
    "Pasar de decimal(el número 83) a octal: ",
    "Pasar de binario(el número 1111) a decimal: ",
    "Pasar de quintal(el número 34) a octal: ",
    "Averiguar el M.C.D. de 36 y 24: ",
    "Averiguar el M.C.D. de 144 y 12: ",
    "Averiguar el M.C.D. de 81 y 27: ",
    "Averiguar el M.C.D. de 90 y 45: ",
    "Averiguar el M.C.M. de 7 y 3: ",
    "Averiguar el M.C.M. de 13 y 5: ",
    "Averiguar el M.C.M. de 21 y 12: ",
    "Averiguar el M.C.M. de 24 y 3: ",
    "A=1, B=0\n(A AND B) OR C = 0\n¿Cuánto vale C? (1 o 0)",
    "A=1, B=1\n(A AND B) OR C = 1\n¿Cuánto vale C? (1 o 0)",
    "A=0, B=0\n(A OR B) AND C = 0\n¿Cuánto vale C? (1 o 0)",
    "A=1, B=0\n(A OR B) AND C = 1\n¿Cuánto vale C? (1 o 0)",
    "A=1, C=1\n(A AND B) OR C = 1\n¿Cuánto vale B? (1 o 0)",
    "A=0, C=0\n(A OR B) OR C = 0\n¿Cuánto vale B? (1 o 0)",
    "B=1, C=1\nA AND B AND C = 1\n¿Cuánto vale A? (1 o 0)",
    "A=1, C=0\n(A AND B) OR C = 0\n¿Cuánto vale B? (1 o 0)",
};

int respuestas[24] = {
    11,
    73,
    111,
    42,
    142,
    123,
    15,
    23,
    12,
    12,
    27,
    45,
    21,
    65,
    84,
    24,
    0,
    0,
    0,
    1,
    0,
    0,
    1,
    0,
};

int main()
{
    srand(time(NULL));
    char *preguntasListas[10];
    int respuestasListas[10];
    int respuestaUser;
    int puntaje = 0;
    char jugarotravez;
    char nombre[15] = {""};
    bool flag = true;

    while (flag == true)
    {
        printf("¡Bienvenido a Matematica EscapeRoom!\n");
        printf("Resulve los acertijos de las puertas para poder avanzar.\n");
        printf("Hay 3 tipos de acertijos:\n");
        printf("1 - Averiguar el código secreto(Cambio de base).\n");
        printf("2 - Desbloquear candados con su clave(M.C.D. y M.C.M.).\n");
        printf("3 - Resolver los circuitos lógicos.\n");

        // Almcenamiento de 10 preguntas para jugar
        for (int i = 0; i < 10; i++)
        {
            int r = rand() % 24;
            preguntasListas[i] = preguntas[r];
            respuestasListas[i] = respuestas[r];
        };

        printf("Coloca tu nombre: ");
        scanf("%s", nombre);
        if (nombre[0] != '\0')
        {
            printf("\n¡Comencemos %s!\n", &nombre);
        };

        for (int i = 0; i < 10; i++)
        {

            printf("%s\n", preguntasListas[i]);
            printf("Ingrese su respuesta: ");
            scanf("%d", &respuestaUser);
            if (respuestaUser == respuestasListas[i])
            {
                printf("Excelente! Sigue así!\n");
                puntaje = puntaje + 1;
            }
            else if (respuestaUser != respuestasListas[i])
            {
                printf("Casi! Sigamos con la siguiente pregunta.\n");
            };
        };
        printf("Tu puntaje fué: %d/10\n", puntaje);
        printf("¿Quieres jugar de nuevo?(s o n).");
        scanf("%c", jugarotravez);
        if (jugarotravez == 's')
        {
            puntaje = 0;
        }
        else
        {
            printf("Cerrando juego...");
            flag = false;
        };
    };
}
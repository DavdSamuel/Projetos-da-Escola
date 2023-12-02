#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adicao(int argc, char *argv[])
{
    float n1 = atof(argv[2]);
    float n2 = atof(argv[3]);

    float resultado = n1 + n2;

    printf("Resultado: %.2f\nEndereço de memória:\nNúmero1: %p\nNúmero2: %p\nResultado: %p\n", resultado, (void *)&n1, (void *)&n2, (void *)&resultado);
} 

void subtracao(int argc, char *argv[])
{
    float n1 = atof(argv[2]);
    float n2 = atof(argv[3]);

    float resultado = n1 - n2;

    printf("Resultado: %.2f\nEndereço de memória:\nNúmero1: %p\nNúmero2: %p\nResultado: %p\n", resultado, (void *)&n1, (void *)&n2, (void *)&resultado);
} 
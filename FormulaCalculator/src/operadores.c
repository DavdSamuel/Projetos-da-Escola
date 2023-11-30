#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float adicao(int argc, char *argv[])
{
    if (argc <= 2 || strcmp(argv[1], "add") != 0)
    {
        printf("ERRO!\nArgumento não reconhecido ou insuficiente.\n");
        return 1;
    }
    else
    {
        if (argc <= 3) {
            printf("ERRO!\nArgumentos insuficientes:\n");
            printf("Uso correto do argumento \"add\": ./FormulaCalculator add <numero1> <numero2>\n");
            return 1;
        }

        float n1 = atof(argv[2]);
        float n2 = atof(argv[3]);

        float resultado = n1 + n2;

        printf("Resultado: %.2f\nEndereço de memória:\nNúmero1: %p\nNúmero2: %p\nResultado: %p\n", resultado, (void *)&n1, (void *)&n2, (void *)&resultado);
    }
} 
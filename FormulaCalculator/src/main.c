#include <stdio.h>
#include <string.h>
#include "operadores.h"

int main(int argc, char *argv[])
{
    printf("######################\n");
    printf("# Formula Calculator #\n");
    printf("######################\n");

    if (argc <= 2 || strcmp(argv[1], "add") != 0)
    {
        printf("ERRO!\nArgumento não reconhecido ou insuficiente.\n");
        return 1;
    }
    else if (argc <= 3 || strcmp(argv[1], "add") != 0) {
        printf("ERRO!\nArgumentos insuficientes:\n");
        printf("Uso correto do argumento \"add\": ./FormulaCalculator add <numero1> <numero2>\n");
        return 1;
    }
    else if (argc == 4 || strcmp(argv[1], "add") != 0)
    {
        float resultado = adicao(argc, argv);
    }

    return 0;
}
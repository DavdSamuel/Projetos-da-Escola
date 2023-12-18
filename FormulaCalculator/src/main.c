#include <stdio.h>
#include <string.h>
#include "operadores.h"

int main(int argc, char *argv[])
{
    printf("######################\n");
    printf("# Formula Calculator #\n");
    printf("######################\n");

    if (argc <= 2) {
        fprintf(stderr, "ERRO!\nArgumento não reconhecido ou insuficiente.\n");
        return 1;
    }
    
    if (strcmp(argv[1], "add") == 0) {
        if (argc != 4) {
            fprintf(stderr, "ERRO!\nArgumentos insuficientes:\nUso correto do argumento \"add\": ./FormulaCalculator add <numero1> <numero2>\n");
            return 1;
        }
        adicao(argc, argv);
    } 
    else if (strcmp(argv[1], "remove") == 0) {
        if (argc != 4) {
            fprintf(stderr, "ERRO!\nArgumentos insuficientes:\nUso correto do argumento \"remove\": ./FormulaCalculator remove <numero1> <numero2>\n");
            return 1;
        }
        subtracao(argc, argv);
    }
    else if (strcmp(argv[1], "multiply") == 0) {
        if (argc != 4) {
            fprintf(stderr, "ERRO!\nArgumentos insuficientes:\nUso correto do argumento \"multiply\": ./FormulaCalculator multiply <numero1> <numero2>\n");
            return 1;
        }
        multiplicacao(argc, argv);
    }
    else if (strcmp(argv[1], "divide") == 0) {
        if (argc != 4) {
            fprintf(stderr, "ERRO!\nArgumentos insuficientes:\nUso correto do argumento \"divide\": ./FormulaCalculator divide <numero1> <numero2>\n");
            return 1;
        }
        divisao(argc, argv);
    } 
    else {
        fprintf(stderr, "ERRO!\nArgumento não reconhecido.\n");
        return 1;
    }

    return 0;
}

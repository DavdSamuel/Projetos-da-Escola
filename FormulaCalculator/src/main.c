#include <stdio.h>
#include <stdlib.h>

/*
argc: Argument counter, ou contador de argumentos
*/
int main(int argc, char *argv[])
{
    printf("######################\n");
    printf("# Formula Calculator #\n");
    printf("######################\n");

    if (strcmp(argv[1], "add") == 0)
    {
        if (argc == 2 || argc == 3) {
            printf("ERRO!\nArgumentos insuficientes:\n");
            printf("Uso correto do argumento \"add\": add <numero1> <numero2>\n");
            return 1;
        }
        else if (argc > 3)
        {

        }
    }
    else
    {
        printf("ERRO!\nArgumento não reconhecido!\n");
        return 1;
    }

    return 0;
}
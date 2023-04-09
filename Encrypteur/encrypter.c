#include "main.h"

int encrypter(int ac, char **av)
{
    int i = 1;
    int j = 0;
    char * arraystock = NULL;

    if (ac > 0)
    {
    while (i < ac)
    {
        arraystock = malloc(sizeof(av[i]) * 1);
        for (; av[i][j] != '\0'; j++)
        {
        printf("%c\n",av[i][j]);
        arraystock[i] = av[i][j];
        }
        printf("%s", arraystock);
        i++;
        j = 0;
    }
    }
    return(0);
}
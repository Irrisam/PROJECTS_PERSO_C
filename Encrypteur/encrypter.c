#include "main.h"

int encrypter(int argc, char **argv)
{
    char* selector[15];
    int i = 1;

    printf("Type in your desired encrypting method from:\ndascii\n");
    scanf("%s", *selector);
    
    if (selector == NULL)
    {
        printf("Please type in an encoding type");
        return(-1);
    }
    if (strlen(*selector) > 7)
    {
        printf("Input too long, please select from the list");
        return(-3);
    }

    if (strlen(*selector) == 7)
    {
        while (i < argc)
        {
            code_asci(argv[i]);
            i++;
        }

    printf("\n");
    return(0);
    }
    else
    {
        printf("Your choice was invalid, please select from the given list");
        return(-2);
    }
}
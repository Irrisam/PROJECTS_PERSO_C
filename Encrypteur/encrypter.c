#include "main.h"

int encrypter(int argc, char **argv)
{
    int i = 2;
    
    if (argv[1] == NULL)
    {
        printf("Please type in an encoding type\n");
        return(-1);
    }
   /** if (argv[1] != "dascii")
    {
        printf("Input too long, please select from the list");
        return(-3);
    }
    */

    if (argv[1][0] == '1')
    {
        while (i < argc)
        {
            code_asci(argv[i]);
            i++;
        }
        printf("\n");
        return(0);
    }
    else if (argv[1][0] == '2')
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
        printf("Your choice was invalid, type number associated to crypting type :\n1 - dascii\n2 - dascii traductor\n");
        return(-2);
    }
}
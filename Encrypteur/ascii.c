#include "main.h"

int code_asci(char* string)
{
    int counter_string = 0;
    int counter_code = 0; 
    char stock;

    while (string[counter_string] != '\0')
    {
        if (counter_code >= 4)
        {
        counter_code = 0;
        }
        stock = string[counter_string] + counter_code;
        printf("%c",stock);
        counter_string++;
        counter_code++;
    }
    printf(" ");
return(0);
}
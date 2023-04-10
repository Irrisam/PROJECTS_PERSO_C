#include "main.h"

int trad_asci(char* string)
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
        if (string[counter_string] == '\'') 
        {
            counter_string++;
        }
        stock = string[counter_string] - counter_code;
        printf("%c",stock);
        counter_code++;
        counter_string++;
    }
    printf(" ");
return(0);
}
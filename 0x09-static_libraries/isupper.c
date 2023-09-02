#include "main.h"

int _isupper(int c)
{
    char ch = 'A';

    if (isupper(ch)) 
    {
        printf("%c is an uppercase letter.\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }

    return 0;
}

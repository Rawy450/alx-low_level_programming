#include "main.h"

int main() 
{
    char ch = 'A';

    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else {
        printf("%c is not an uppercase letter.\n", ch);
    }

    return 0;
}

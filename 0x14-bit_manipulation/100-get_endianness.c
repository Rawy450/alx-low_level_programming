#include <stdio.h>
#include "main.h"
int get_endianness(void)
{
    int n = 1;
    char *c = (char *)&n;
    return (int)*c;
}

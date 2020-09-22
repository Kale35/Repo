#include <stddef.h>
#include <stdio.h>

int main()
{
    int c[5];
    for (size_t i = 0; i < 5; i++)
    {
        c[i] = 2;
    }

    printf("%s%13s\n", "Element", "Value");

    for (size_t i = 0; i < 5; i++)
    {
        printf("%7u%13d\n", i, c[i]);
    }
}
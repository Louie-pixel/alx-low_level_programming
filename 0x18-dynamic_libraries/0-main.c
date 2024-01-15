#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    len = _strlen("My Dyn Lib");
    printf("Length of the string: %d\n", len);

    _puts("Hello, Dynamic Library!");

    printf("_islower('a'): %d\n", _islower('a'));
    printf("_islower('A'): %d\n", _islower('A'));
    printf("_isdigit('5'): %d\n", _isdigit('5'));
    printf("_isdigit('x'): %d\n", _isdigit('x'));

    char str1[20] = "Hello, ";
    char str2[] = "World!";
    _strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return (0);
}

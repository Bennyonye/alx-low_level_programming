#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list nums;
    unsigned int index;

    va_start(nums, n);

    for (index = 0; index < n; index++)
    {
        printf("%d", va_arg(nums, int));

        if (separator != NULL && index != n - 1)
        {
            printf("%s", separator);
        }
    }

    printf("\n");

    va_end(nums);
}

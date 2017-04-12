#include <stdio.h> 
#include <stdlib.h>
#include <stdarg.h>

#define LOG_FILENAME "log.txt"

void print_to_log(char *format, ...)
{
    FILE  *f;

    fopen_s(&f, LOG_FILENAME, "ab");
    if (f == NULL)
    {
        printf("Error opening file!\n");
    }

    va_list arglist;
    va_start(arglist, format);
    vfprintf(f, format, arglist);
    va_end(arglist);

    fclose(f);
}

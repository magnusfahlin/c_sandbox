#include <stdio.h>
#include "print_to_file.h"

int main()
{
    printf("Hello, World! %d  %d %d \r\n",1, 2, 3);
    print_to_log("Hello, World! %d  %d %d  \r\n", 1, 2, 3);
    getchar();
    return 0;
}
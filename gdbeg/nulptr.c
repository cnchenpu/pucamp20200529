/* nulptr.c
 * Segfault: Dereference NULL pointer */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int* ptr = NULL;     /* int* ptr = malloc(sizeof(int)); */

    printf("Original: %p -> %d -> %d\n", &ptr, ptr, *ptr);

    *ptr = 1; /* dereference pointer ptr */

    printf("New: %p -> %d -> %d\n", &ptr, ptr, *ptr);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int arr[100];
    int *p;
    int c = INT_MAX;

    c++;                    /* Undefined behavior: signed integer overflow */
    p = (int *)malloc(100); /* Memory leak: p will not be freed */
    arr[200] = 30;          /* Undefined behavior: array index overflow */
    p[200] = 50;            /* Address error: accessing beyond allocated memory */

    return 0;
}
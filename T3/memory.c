#include <stdio.h>
#include <stdlib.h>

void bad_function(void);

int main(void)
{
    bad_function();
    return 0;
}

void bad_function(void)
{
    char *p1, *p2, *p3;

    p1 = (char *)malloc(1024 * 204);
    p2 = (char *)malloc(1024 * 204);
    p3 = (char *)malloc(1024 * 204);

    free(p1);
    free(p2);
}

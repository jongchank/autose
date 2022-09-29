#include <stdio.h>
int main(void)
{
#ifdef HELLO
    printf("Hello World\n");
#else
    printf("Goodbye World\n");
#endif
    return 0;
}

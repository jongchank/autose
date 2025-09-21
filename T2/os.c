#include <stdio.h>

int main(void)
{
#ifdef __linux__
    printf("Linux\n");
#elif _WIN64
    printf("Windows\n");
#else
    printf("Another OS\n");
#endif
    return 0;
}

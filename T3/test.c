#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = -1;
    b = 1;
    c = -1;
    a = b + c;
    b = a + c;
    c = a + b + 1;
    a = b / c;
    b = a * c;
    printf("a b c = %d %d %d\n", a, b, c);

    return 0;
}

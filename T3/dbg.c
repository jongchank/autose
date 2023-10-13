#include <stdio.h>

#ifdef DEBUG
#define DBG(fmt, ...) printf("(%s:%d) " fmt "\n", __FILE__, __LINE__, __VA_ARGS__)
#else
#define DBG(fmt, ...)
#endif

int main(void)
{
    int a, b, c;
    a = -1;
    DBG("a = %d", a);
    b = 1;
    DBG("b = %d", b);
    c = -1;
    DBG("c = %d", c);
    a = b + c;
    DBG("a = %d", a);
    b = a + c;
    DBG("b = %d", b);
    c = a + b + 1;
    DBG("c = %d", c);
    a = b / c;
    DBG("a = %d", a);
    b = a * c;
    printf("a b c = %d %d %d\n", a, b, c);

    return 0;
}

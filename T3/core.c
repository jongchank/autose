#include <stdio.h>
#include <string.h>
void outer_function(void);
void inner_function(void);
void bad_function(void);
int main(void)
{
    outer_function();
    return 0;
}
void outer_function(void) {
    inner_function();
}
void inner_function(void) {
    bad_function();
}
void bad_function(void) {
    char a[100];
    char *p = 0;

    memcpy(p, a, sizeof(a));
}

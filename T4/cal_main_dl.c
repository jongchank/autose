#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>
#include <dlfcn.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    void *h;
    int (*add)(int, int);
    int (*sub)(int, int);
    int (*mul)(int, int);
    int (*dur)(int, int);

    h = dlopen("./libarithmetic.so", RTLD_LAZY);
    add = dlsym(h, "add");
    sub = dlsym(h, "sub");
    mul = dlsym(h, "mul");
    dur = dlsym(h, "dur");

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %d\n", a, b, dur(a, b));

    dlclose(h);
    return 0;
}

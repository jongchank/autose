#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double a, b, c, d;
    double root1, root2;

    printf("ax^2 + bx + c\n");
    printf("Enter a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d < 0) {
        printf("No real root\n");
    }
    else {
        root1 = (-b - sqrt(d)) / (2 * a);
        root2 = (-b + sqrt(d)) / (2 * a);
        printf("%f %f\n", root1, root2);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("enter the first value: ");
    scanf("%d", &a);
    printf("enter the second value: ");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;

    printf("the sum is: %d\n", c);
    printf("the sum is: %d\n", d);
    printf("the sum is: %d\n", e);
    printf("the sum is: %d\n", f);
    printf("the sum is: %d\n", g);
}

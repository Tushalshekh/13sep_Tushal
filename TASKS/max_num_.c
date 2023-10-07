#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("enter the first number ");
    scanf("%d", &n1);
    printf("enter the first number ");
    scanf("%d", &n2);
    printf("enter the first number ");
    scanf("%d", &n3);
    if (n1 > n2, n1 > n3)
    {
        printf("%d is max value", n1);
    }
    else if (n2 > n1, n2 > n3)
    {
        printf("%d is the max value", n2);
    }
    else
    {
        printf("%d is the max value", n3);
    }

    return 0;
}
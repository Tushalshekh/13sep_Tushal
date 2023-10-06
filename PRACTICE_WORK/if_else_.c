#include <stdio.h>
int main()
{
    int t;
    printf("enter the number:");
    scanf("%d", &t);
    if (t> 0)
    {
        printf("%d is the positive number", t);
    }
    else
        printf("%dis the negative number", t);

    return 0;
}
#include <stdio.h>
int main()
{
    int a;
     printf("enter the num:");
     scanf("%d", &a);
    if (a >= 0)
    {
        printf("positive number");
    }
    if (a <= 0)
        printf("negative number");
        return 0;
}
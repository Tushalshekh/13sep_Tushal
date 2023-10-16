#include <stdio.h>
int main()
{
    float cel, fae;
    printf("enter the value : ");
    scanf("%f", &cel);
    fae = (cel * 9 / 5) + 32;
    printf("\nfae : %f", fae);

    return 0;
}

#include <stdio.h>
int main()
{
    float meter, feet, value;
    printf("enter the value : ");
    scanf("%f", &value);
    meter = value;
    feet = value * 3.28;
    printf("\nmeter : %f", meter);
    printf("\nfeet : %f", feet);

    return 0;
}
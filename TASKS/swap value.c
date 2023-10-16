#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the frist num : ");
    scanf("%d",&a);
    printf("enter the second num : ");
    scanf("%d",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    
     printf("\nfrist num is : %d",a);
    printf("\nsecond num is  : %d",b);    
    return 0;
}

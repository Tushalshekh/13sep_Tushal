#include<stdio.h>
int main()
{
    int age;
    printf("enter your corrent age: ");
    scanf("%d",&age);
    age++;
    printf("after one year your age is: %d\n",age);
    age--;
    age--;
    printf("before one year your age is: %d",age);
    return 0;
}

#include <stdio.h>
int add(int num1, int num2)
{
return num1+num2;
}
int main()
{
    int a,b;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    
    printf("the result is %d\n", add(a,b));
    
    return 0;
}
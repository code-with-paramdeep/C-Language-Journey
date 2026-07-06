#include <stdio.h>
int main()
{

int a,b,c;
printf("enter the first number: \n");
scanf("%d",&a);
printf("enter the second number: \n");
scanf("%d",&b);
printf("enter the third number: \n");
scanf("%d",&c);
if(a>b && a>c)
printf("%d is largest number", a);
else
if(b>a && b>c)
printf("%d is the largest number", b);
else
printf("%d is the largest", c);
return 0;


}
#include <stdio.h>
int main()
{
    int num,i,j;
    j=1;
    printf("enter the number you want the factorial: ");
    scanf("%d", &num);
    printf("the factorial is :");
    for(i=num; i>0; i--)
    {
j=j*i;
if(i==1)
    printf("1");
    else
    printf("%d * ", i);
    }
printf(" = %d\n", j);
    return 0;
}
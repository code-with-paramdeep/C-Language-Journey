#include<stdio.h>
int main()
{
    int n;
    printf("put the rain: mm");
    scanf("%d", &n);
    if(n==0)
    printf("no rain");
     else if(n<=10)
     printf("light rain");
    else if(n>10)
     printf("heavy rain");
    return 0;
}
#include <stdio.h>
int main()
{
int i,j,k;

for(i=2; i<=50; i++)
{
k=1;
for(j=2; j<i; j++)
{
if(i%j==0)
{
    k=0;
    break;
}
}
if(k==1)
{
    printf("%d\n", i);
}
}
return 0;
}
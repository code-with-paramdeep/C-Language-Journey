#include <stdio.h>
int main()
{
    int num,i,j;
    j=1;
    printf("enter the number you want the factorial: ");
    scanf("%d", &num);
    
    for(i=num; i>0; i--)
    // {
j=j*i;      // main code is until this line.It can give the only answer.//
// if(i==1)
//     printf("1");
//     else
//     printf("%d * ", i);
//     }
// printf(" = %d\n", j);    // if you put extra these lines your answer will be looked more professional.//
printf("the factorial is: %d", j);
    return 0;
}
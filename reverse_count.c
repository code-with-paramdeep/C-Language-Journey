# include <stdio.h>
int main()
{
int number;
printf("enter any number you want to reverse count :");
scanf("%d", &number);
while(number>0)
{

printf(" %d \n", number);
number=number-1;
}
return 0;
}
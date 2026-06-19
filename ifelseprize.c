#include <stdio.h>
int main()
{
char ans;
printf("in which subject yoiu have passed among maths, science or both? \n");
printf("press 'b' for both \n");
printf("press 'm' for math \n");
printf("press 's' for science \n");
scanf("%c", &ans);
if (ans=='b')
   printf("you are rewarded rs. 45.");
else if (ans=='m')
   printf("you are rewarded rs. 15.");
else if (ans=='s')
    printf("you are rewarded rs. 15");
else 
    printf("please press the correct letter as mentioned");
return 0;
}
#include <stdio.h>
int main()
{
    char a,p;
    float x,y;
    char g;
    printf("enter the first number: \n");
    scanf("%f", &x);
    printf("enter the second number: \n");
    scanf("%f", &y);
    printf("press 'a' for area. press 'p' for perimeter.");
    scanf(" %c",&g);
    if(g=='a')
    
     printf("the area is %f", x*y);
    else if(g=='p')
     printf("the perimeter is %f", 2*(x+y));
    else 
     printf("fuck you");
    return 0;

}
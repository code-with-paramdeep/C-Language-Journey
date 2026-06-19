#include <stdio.h>
int main()
{
    int length,width;
    printf("enter the value of length \n");
    scanf("%d",&length);
    printf("enter the value of width \n");
    scanf("%d",&width);
    printf("the area is: %d\n", length*width);
    printf("the perimeter is: %d", 2*(length+width));
    
    return 0;
}
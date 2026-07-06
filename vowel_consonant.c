#include <stdio.h>
int main()

{
    char letter;
    printf("enter any letter: ");
    scanf("%c", &letter);
    if(letter=='a' || letter=='e'|| letter=='i'|| letter=='o'|| letter=='u'|| 
        letter=='A' || letter=='E'|| letter=='I'|| letter=='O'|| letter=='U')
    printf("letter is vowel");
    else if((letter>='a' && letter<='z')|| (letter>='A' && letter<='Z'))
    printf("letter is consonant.");
    else
    printf("gand mara");
return 0;
}
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a Character \n");
    scanf("%c",&ch);
    
    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
         printf("%c is a vowel",ch);
                   break;
        default : printf("%c is not a vowel",ch);
                    break;
    }
    return 0;
}

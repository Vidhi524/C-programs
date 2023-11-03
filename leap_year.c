#include <stdio.h>
#include <conio.h>
int main()
{
int y;
printf("Enter a year \n");
scanf("%d",&y);
if(y%100==0)
    {
        if(y%400==0)
        {
            printf("%d is a leap year",y);
        }
        else
        {
            printf("%d is a not leap year",y);
        }
    }
else
    {
        if(y%4==0)
        {
            printf("%d is a leap year",y);
        }
        else
        {
            printf("%d is a not leap year",y);
        }
    }
return 0;
}

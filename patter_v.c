#include <stdio.h>
#include <conio.h>
int main()
{
     printf("\n");
      printf("\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(int j=4;j>0;j--)
        {
            if(i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

     printf("\n");
      printf("\n");
    return 0;
}

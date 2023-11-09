#include <stdio.h>
#include <conio.h>

int main()
{
     printf("\n"); 
     printf("\n");

    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=5;j++)
        if(j==1 || j==5 || i==3)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
         printf("\n");
    }

      printf("\n");
       printf("\n");
       return 0;
}

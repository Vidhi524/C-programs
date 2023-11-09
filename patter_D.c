#include <stdio.h>
#include <conio.h>

int main()
{

printf("\n");
      printf("\n");
    for(int i=1;i<=5;i++)
    {
        printf("*");
        
        
        for(int j=2,k=2;j<=5,k<=5;j++,k++)
        {

            if(i==2||i==4)
            {
                if(j==4)
                printf("*");
            }
            if(i==3)
            {
                if(j==5)
                {
                    printf("*");
                }
            }

            if((i==1 && j==2)||(i==1 && j==3) ||(i==5 && j==2)||(i==5 && j==3))
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
return 0;
}

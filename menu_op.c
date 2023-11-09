#include <stdio.h>
#include <conio.h>
#include <math.h>


void menu();


void fact()
{
    int n,fact=1;
printf("Enter number to get its factorial \n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d \n",fact);

}

void sum_dig()
{
    int n,r;
    int s=0;

printf("Enter a number \n");
scanf("%d",&n);
for(int q=n;q>0;q=q/10)
{
    r=q%10;
    s=s+r;
}
printf("sum of digits of %d is %d \n",n,s);

}

void po()
{
    int n,p;
    int s=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("Enter power \n");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        s=s*n;
    }
    printf("\n%d ", s);
   
}

void menu()
{
int k;
    printf("\n Would you like to continue? 0 for yes 1 for no \n");
    scanf("%d",&k);
    if(k==1)
    {
        printf("exited \n");
    }
    else
    {
    int n;
    printf("What Operation to be performed?\n 1.Factorial \n 2.Power \n 3.Add Digit \n");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
    {
            fact();
            menu();
            break;
    }
    case 2:
    {
            po();
            menu();
            break;
    }
    case 3:
    {
            sum_dig();
            menu();
            break;
    }
    default:
    {
        printf("enter valid operation \n");
        menu();
        break;
    }
    }
    }   
}


int main()
{
   menu(); 
 return 0;
}

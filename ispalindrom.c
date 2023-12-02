#include <stdio.h>
#include <conio.h>

bool isPalindrome(int x) {
    if(x<0)
    {
        return false;
    }
    else
    {
    long int r,rev_num=0;
   for(int q=x;q>0;q=q/10)
   {
       r=q%10;
       rev_num=(rev_num*10)+r;
   }
   if(x==rev_num)
   {
       return true;
   }
   else
   {
       return false;
   }
    }
}

int main()
{
boolean x,n;
printf("Enter a number to check if palindrame");
scanf("%d",&n);
isPalindrome(n);
}


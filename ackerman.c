#include <stdio.h>
#include <conio.h>

int A(int,int);

int main()
{
    
    printf("%d \n",A(0,6));
    
    return 0;
}

int A(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(m>0 && n==0)
    {
        return A(m-1,1);
    }
    else
    {
        return A(m-1,A(m,n-1));
    }
}

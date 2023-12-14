#include <stdio.h>
#include <conio.h>


void swap(int *,int *);
int main()
{
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
    printf("Before swap a=%d b=%d \n",*p,*q);
    swap(p,q);
    printf("After swap a=%d b=%d\n",*p,*q);
    return 0;
}

    //---------------------without pointers--------------------------------------------
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // printf("%d %d",a,b);

    //----------------------with pointers----------------------------------------------------
    void swap(int *p,int *q)
    {
        int t=*p;
        *p=*q;
        *q=t;
    }

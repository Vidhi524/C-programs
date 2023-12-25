#include <stdio.h>
#include <conio.h>
int main()
{
    //---------------------------1-------------------------------------------------
    // int a=10;
    // int *p=&a;
    // int **p1=&p;
    // printf("%d\n",a);
    // printf("%d\n",*p);
    // printf("%d\n",**p1);
    // printf("*p1=%p  &p=%p",*p1,p);

    //-------------------------------------2----------------------------------------
    int *p;
    int **p1=&p;
    printf("enter array elements");
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n");
    for(int j=0;j<5;j++)
    {
    printf("%d  ",*(*p1+j));
    }
    return 0;
}
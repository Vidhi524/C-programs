#include <stdio.h>
#include <conio.h>

int add(int *,int *);
int main()
{
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
    printf("%d",add(p,q));
    return 0;
}
int add(int *a,int *b)
{
    int add=*a+*b;
    return add;
}

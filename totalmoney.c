/*Hercy wants to save money for his first car. He puts money in the Leetcode bank every day.
He starts by putting in $1 on Monday, the first day. Every day from Tuesday to Sunday, he will put in $1 more than the day before. On every subsequent Monday, he will put in $1 more than the previous Monday.
Given n, return the total amount of money he will have in the Leetcode bank at the end of the nth day. */

#include <stdio.h>

int totalMoney(int n) {
    int weeks=n/7;
    int days=n%7;
    int i,t;
    int s=0,dy=0;
    
    for(i=1;i<=weeks;i++)
    {

        for(int k=i,j=0;j<7;j++,k++)
        {
        s=s+k;
        }    
    } 

    for(int m=i,d=0;d<days;d++,m++)
    {
            dy=dy+m;
    }

    t=s+dy;
    
    
return t;
}


int main()
{
int x= totalMoney(10);

printf("%d",x);
return 0;
}

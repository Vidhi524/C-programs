#include <stdio.h>
#include <conio.h>
void menu();

void calc()
{
  int a,b,c,s,sub,mul,div;
  printf("Enter 1st number : \n");
  scanf("%d", &a);
  printf("Enter 2nd number : \n");
  scanf("%d", &b);
  printf("Enter number to choose Operations to be performed \n");
  printf("1. ADD \n");
  printf("2. SUBTRACT \n");
  printf("3. MULTIPLY \n");
  printf("4. DIVIDE \n");
  scanf("%d", &c);

    switch (c)
    {
    case 1: 
      s=a+b;
      printf("sum is %d \n",s);
      menu();
      break;

    case 2: 
      sub=a-b;
      printf("difference is %d \n",sub);
      menu();
      break;

    case 3: 
      mul=a*b;
      printf("multiply is %d \n",mul);
      menu();
      break;

    case 4: 
      div=b/a;
      printf("divide is %d \n",div);
      menu();
      break;

    default: 
      printf("Enter Correctly \n");
      menu();
      break;
    }
  
}

void menu()
{
  int d;
  printf("Would you like to continue? 1 for yes 0 for no \n");
  scanf("%d",&d);
  printf("\n");
  if(d==1)
  {
    calc();
  }
}
int main()
{
  printf("hello Calculator \n");
  menu();
return 0;
}
 

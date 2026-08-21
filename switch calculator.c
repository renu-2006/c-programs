#include<stdio.h>
int main()
{
  int a,b;
  char op;
printf("enter a number:");
scanf("%d,%d",&a,&b);
printf("enter a operator:");
scanf("%c,"&op);
switch (op)
{
  case '+';
  printf("result=%d",a+b);
  break;
  
  case '-';
  printf("result=%d",a-b);
  break;
  
  case'*';
  printf("result=%d",a*b);
  break;
  
  case '/';
   if(b!=0)
     printf("result=%d",a/b);
   else
     printf("cannot divide by zero");
 break;
  
 defaulf:
printf("invalid operator");
}
return 0;
}

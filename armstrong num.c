#include<stdio.h>
int main()
{
  int n, original,remainder,sum=0;
printf("enter a number:");
scanf("%d",&n);
original=n;
while(n!=0)
  {
  remainder=n%10;
  sum= sum+remainder*remainder*remainder;
  n=n/10;
}
if(original==sum)
  printf("armstrong number");
else
  printf("not armstrong number");
return 0;
}

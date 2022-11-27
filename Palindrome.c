#include<stdio.h>
int main()
{
  int a,rem,rev=0,orig,temp;
  scanf("%d",&a);
  temp=a;
  orig=temp;
  while(a)
  {
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
  }
  if(rev==orig)
  printf("Palindrome");
  else
  printf("Not a Palindrome");
}  

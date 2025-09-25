#include<stdio.h>
void main ()
{
  int n;
  printf("Enter 1 if you are a fool, 0 if not:");
  scanf("%d",&n);
  if(n=1)
    printf("You are a fool");
  if(n=0)
    printf("You might not be a fool");
  printf("Fools gather around fools");
}

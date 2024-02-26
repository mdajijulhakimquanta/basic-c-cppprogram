#include<stdio.h>
#include<conio.h>
void main()
{
 int a,t=1,i;
 printf("enter a number");
 scanf("%d",&a);
 while(t<=10)
 {
  i=t*a;
  t=t+1;
  printf("\n %d",i);
 }
}
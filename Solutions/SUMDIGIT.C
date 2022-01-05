/* write a program to enter any number and print sum of its digit.
date:23-12-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
      int n,r,sum=0;
      clrscr();
      printf("enter the number");
      scanf("\n %d",&n);
      while(n>0)
      {
      r=n%10;
      sum=sum+r;
      n=n/10;
      }
      printf("sum of digit = %d",sum);
      getch();
}











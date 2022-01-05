/* write a program to enter any number and  check its an armstrong number or not.
date:31-12-2021 */
#include<stdio.h>
#include<conio.h>
void main()
{
       int a,b,c=0,d;
       clrscr();
       printf("\n enter any number:");
       scanf("%d",&a);
       d=a;
       while(a>0)
       {
	     b=a%10;
	     c=c+b*b*b;
	     a=a/10;
       }
       if(d==c)
	     printf("\n it is an armstrong number");
       else
	     printf("\n it is not a armstrong number");
       getch();
}
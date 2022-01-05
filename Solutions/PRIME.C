/* wap write a program to enter any number and check it is prime number or not.
date:23-12-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
       int no,i,c=0;
       clrscr();
       printf("\n enter the value:");
       scanf("%d",&no);
       i=2;
       while(i<no)
       {
	   if(no%i==0)
	   {
		c=1;
		break;

	   }
	   i=i+1;
       }
	   if(c==1)
		printf("this is not a prime number");
	   else
		printf("this is a prime number");

       getch();
}
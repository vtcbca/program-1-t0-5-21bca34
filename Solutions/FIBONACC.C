/* write a program to enter any number and print fibonacci-series.
date:31-12-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
       int a=0,b=1,c,i,no;
       clrscr();
       printf("enter the number of element:");
       scanf("%d",&no);
       printf("\n %d %d",a,b);
       for(i=2;i<no;++i)
       {
	    c=a+b;
	    printf("%d",c);
	    a=b;
	    b=c;
       }
       getch();
}
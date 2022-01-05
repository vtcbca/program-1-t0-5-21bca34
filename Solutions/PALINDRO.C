/* write a program to enter any number and check number is palindrom number or not.
date:31-12-2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 int a,b,c=0,d;
	 clrscr();
	 printf("\n enter any number");
	 scanf("%d",&a);
	 d=a;
	 while(a>0)
	 {
	     b=a%10;
	     c=(c*10)+b;
	     a=a/10;
	 }
	 if(d==c)
	     printf("\n this is a palindrom number");
	 else
	     printf("\n this is not a palindrom number");
	 getch();

}

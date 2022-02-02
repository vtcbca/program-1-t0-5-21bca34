/* write to print "*" in pattern from*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s;
	clrscr();
	printf("\n enter rows number");
	scanf("%d",&s);
	     for(i=0;i<s;i++)
	{
	     for(j=0;j<=i;j++)
	     {
		 printf("*");
	     }
	     printf("\n");
	}
	getch();
}

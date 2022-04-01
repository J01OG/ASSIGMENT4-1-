/*
Jayash prem 2106118
program:LA4.6 WAP to print the series as 3 5 7 11 13 17..........n, where n is given by user.
Date:23/03/22                      
 */
#include<stdio.h>
int main()
	{
	int i,n,a,c,j;
	printf("Enter the value of n: ");
	scanf(" %d",&n);
	for(i=3;i<=n;i++)
		{
			c=0;
			for(j=1;j<=i;j++)
			{
			if(i%j==0)
				c=c+1;		
			}
			if(c==2)
				printf("%d ",i);
		}
	return 0;
	}

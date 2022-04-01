/*
Jayash prem 2106118
program:LA4.5 WAP to print the series as 1 1 2 3 5 8 13 ..........n, where n is given user.    
Date:23/03/22                      
 */
#include<stdio.h>
int main()
	{
	int i,n,a,b,c;
	printf("Enter the value of n: ");
	scanf(" %d",&n);
	a=-1;b=1;c=a+b;
	while(c<=n)
	{
		printf("%d ",c);
		a=b;b=c;c=a+b;
	}
	return 0;
	}

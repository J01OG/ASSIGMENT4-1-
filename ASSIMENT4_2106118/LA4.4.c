/*
Jayash prem 2106118
program:LA4.4 WAP to print the series as 1 3 7 15 31 ..........n, where n is given by user.        
Date:23/03/22                      
 */
#include<stdio.h>
int main()
	{
	int i,n;
	printf("Enter the value of n: ");
	scanf(" %d",&n);
	for(i=2;i<=n;i=i*2)
		printf(" %d ",i-1);
	return 0;
	}

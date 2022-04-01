/*
Jayash prem 2106118
program:LA4.2 WAP to input any integer and print your name that many times.                     
Date:23/03/22                      
 */
#include<stdio.h>
int main()
	{
		
	int i,c;
	printf("Enter how many time you want to print my name: ");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
		printf("\n %d Jayash Prem",i);
	return 0;
	}

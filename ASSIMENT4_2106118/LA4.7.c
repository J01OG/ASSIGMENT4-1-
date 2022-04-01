/*
Jayash prem 2106118
program:LA4.7 WAP to print all odd and even numbers separately within a given range.The range is input through user.  
Date:23/03/22                      
 */
#include<stdio.h>
int main()
	{
	int i,a,b;
	printf("Enter the range : ");
	printf("MIN: ");
	scanf(" %d",&a);
	printf("MAX: ");
	scanf(" %d",&b);
	printf("\nEVEN NUMBER BETWEEN %d - %d :\n",a,b);
	for(i=a;i<=b;i+=1)
		if(i%2==0)
		printf("%d ",i);
	printf("\nODD NUMBER BETWEEN %d - %d :\n",a,b);
	for(i=a;i<=b;i+=1)
		if(i%2!=0)
		printf("%d ",i);
	return 0;
	}

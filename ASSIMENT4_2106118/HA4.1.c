/*
Jayash prem 2106118
program:HA4.1 WAP to check whether an input integer is strong number or not.
(Hint: If the sum of factorials of all digits of a number are equal to the 
number are equal to the number, it is called a strong number )            
Date:23/03/22                      
 */
#include<stdio.h>
int main()
	{
	int n,i,fact,digit,sum,temp;
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		digit=n%10;
		fact=1;
		for(i=1;i<=digit;i=i+1)
			fact=fact*i;
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	printf("%d is a strong number!",temp);
	else
	printf("%d is not a strong number",temp);
	return 0;
	}

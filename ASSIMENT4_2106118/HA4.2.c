#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Prime Factors: ");
	while(n>0)
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				c=0;
				for(j=1;j<=i;j++)
				if(i%j==0)
				c+=1;
				if(c==2)
				{
				printf("%d ",i);
				n=n/i;			
				}
			i=1;	
			}
		}	
	}
 return 0;
}

#include<stdio.h>
int main()
{
	int n=10;
	int i,j;
	
	for(i=n;i>=6;i--)
	{
		for(j=n;j>=6;j--)
		{
			if(i>=j)
			{
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		
	}
}
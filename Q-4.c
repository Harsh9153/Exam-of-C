#include<stdio.h>
ans(int x)
{
	if(x%3==0 && x%5==0)
	{
		printf("number is divisible by 3 & 5");
	}
	else
	{
		printf("number is not divisible by 3 & 5");
	}
}


void main()
{
	int a;
	printf("enter any number");
	scanf("%d",&a);
	ans(a);
}
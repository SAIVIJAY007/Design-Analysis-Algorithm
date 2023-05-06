#include<stdio.h>
#include<stdbool.h>
bool isprime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n,num,i,flag,j;
	printf("Enter the numbers till: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
	{
		if(isprime(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

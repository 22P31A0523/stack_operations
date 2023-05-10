#include<stdio.h>
int main()
{
	int n;
	scamf("%d",&n);
	int res=fact(n);
	printf("%d",res);
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

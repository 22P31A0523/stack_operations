#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int a[n],*ptr;
	ptr=&a;
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("%d",sum);
}

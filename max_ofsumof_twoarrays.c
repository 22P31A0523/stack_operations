#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n],b[n],c;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c=a[i]+b[i];
	    printf("%d ",c);
	}
	for(i=0;i<n;i++)
	{
		int max=c;
		for(i=1;i<n;i++)
		{
			if(c>max)
			max=c;
		}
		printf("\n%d",max);
	}
}

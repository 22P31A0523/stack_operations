#include<stdio.h>
int selection_sort(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		int min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min_index])
			{
			min_index=j;
		    }
		}
	t=a[i];
	a[i]=a[min_index];
	a[min_index]=t;
    }
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

#include<stdio.h>
int lomuto_partition(int *a,int l,int r)
{
	int i=l-1,j,pivot=a[r],temp,t;
	for(j=l;j<r;j++)
	{
		if(a[j]<pivot)
		{
			i++;
		    temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
	    }
    }
	t=a[r];
	a[r]=a[i+1];
	a[i+1]=t;
	return i+1;
}																																																																				]
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lomuto_partition(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

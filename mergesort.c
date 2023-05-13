#include<stdio.h>
#define min(a,b) a<b ?a:b
int merge(int *a,int l,int m,int r)
{
	int b[r-l+1];
	int i=l,j=m+1,k=0,z;
	while(i<=m&&j<=r)
	{
		if(a[i]<=a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	while(i<=m) b[k++]=a[i++];
	while(j<=r) b[k++]=a[j++];
	k=0;
	for(z=l;z<=r;z++)
	{
		a[z]=b[k++];
	}
}
void merge_sort(int *a,int n)
{
	int l,m,r,p,i;
	for(p=1;p<n;p*=2)
	{
		for(i=0;i<n;i+=2*p)
		{
			l=i;
			m=min(l+p-1,n-1);
			r=min(l+2*p-1,n-1);
			merge(a,l,m,r);
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//merge(a,0,4,n-1);
	merge_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

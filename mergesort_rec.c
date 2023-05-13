#include<stdio.h>
void merge(int *a,int l,int m,int r)
{
	int b[r-l+1];
	int i=l,j=m+1,k=0,z;
	while(i<=m&&j<=r)
	{
		if(a[i]<a[j])
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
void merge_sort_rec(int *a,int l,int r)
{
	if(l<r){
		int m=(l+r)/2;
		merge_sort_rec(a,l,m);
		merge_sort_rec(a,m+1,r);
		merge(a,l,m,r);
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
	merge_sort_rec(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

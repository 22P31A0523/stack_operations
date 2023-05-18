#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int lomuto_partition(int *a,int l,int r)
{
	int i=l-1,j,pivot=a[r];
	for(j=l;j<r;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[r],&a[i+1]);
	return i+1;
}
void quick_sort(int *a,int l,int r)
{
	if(r>l){
	int p=lomuto_partition(a,l,r);
	quick_sort(a,l,p-1);
	quick_sort(a,p+1,r);
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
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

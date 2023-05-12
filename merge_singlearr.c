#include<stdio.h>
void merge(int *a,int l,int m,int r)
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
	for(z=l;z<=r;z++){
        printf("%d ",b[z]);                   //a[z]=b[z];           
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
	merge(a,0,5,n-1);
	//for(i=0;i<n;i++)
	//printf("%d ",a[i]);
}

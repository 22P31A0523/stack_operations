#include<stdio.h>
void bubble_sort(char *a,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	char a[n];
	scanf("%s",a);
	bubble_sort(a,n);
	printf("%s",a);
}

#include<stdio.h>
int binary_search(int n,int *arr,int se)
{
	int i,mid,low=0,high=n-1;
	while(low<=high){
		mid=(low+high)/2;
	    if(se==arr[mid]) return mid;
	    else if(se>arr[mid]) low=mid+1;
	    else high=mid-1;
	}
	return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int se;
	scanf("%d",&se);
	int res=binary_search(n,arr,se);
	if(res==-1){
		printf("element not found");
	}
	else{
		printf("element found at %d index",res);
	}
}

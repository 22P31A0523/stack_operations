#include<stdio.h>
int binary_search_recursive(int n,int *arr,int se,int low,int high)
{
	if(low>high) return -1;
	else{
		int mid=(low+high)/2;
		if(se==arr[mid]) return mid;
	    else if(se>arr[mid])
	    return binary_search_recursive(n,arr,se,mid+1,high);
	    else 
	    return binary_search_recursive(n,arr,se,low,mid-1);
	}
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
	int res=binary_search_recursive(n,arr,se,0,n-1);
	if(res==-1){
		printf("element not found");
	}
	else{
		printf("element found at %d index",res);
	}
}

#include<stdio.h>
int fuct(int a,int b,int c,int d)
{
	int m=a+b,n=c*d,h=n-m;
	return h;
}
int main()
{
	int x=fuct(1,2,3,4);
	printf("%d",x);
}

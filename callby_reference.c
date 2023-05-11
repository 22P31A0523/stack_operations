#include<stdio.h>
void modify(int *a)
{
	*a=*a+1;
}
int main()
{
	int a=10;
	printf("before modification:%d\n",a);
	modify(&a);
	printf("after modification:%d",a);
}

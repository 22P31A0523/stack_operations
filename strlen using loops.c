#include<stdio.h>
int main()
{
	char str[10];
	scanf("%[^\n]s",&str);
	int n,i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("%d",len);
}

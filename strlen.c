#include<stdio.h>
#include<string.h>
int main()
{
	char name1[20];
	scanf("%[^\n]s",&name1);
	//scanf(" %[^\n]s",&name2);
	//strcat(name1,name2);
	strrev(name1);
	printf("name=%s",name1);
}

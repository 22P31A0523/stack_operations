#include<stdio.h>
int main()
{
    char str[100],str1[100];
    scanf("%[^\n]s",&str);
    int i,j,temp,len=0;
	for(i=0;str[i]!='\0';i++)
    {
       len++;
    }
    i=0;
    j=len-1;
    while(i<j)
    {
    	temp=str[j];
	 	str[j]=str[i];
	 	str[i]=temp;
	 	i++;
	 	j--;
	 }
	 printf("%s",str);
 }
	

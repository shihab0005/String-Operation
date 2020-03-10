/* C Program to Remove First Occurrence of a Character in a String */

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int i,len;
	
	printf("Enter String :");
	gets(str);
	
	printf("Enter Character To Remove First Occurrence: ");
	scanf("%c",&ch);
	len=strlen(str);
	
	for(i=0;i<len && str[i] != ch;i++);
	
	while(i<len)
	{
		str[i]=str[i+1];
		i++;
	}
	printf("after Removing First occurrence of '%c' = %s ",ch,str);
	
}

/* C Program to Count Total Number of Words in a String */
#include<stdio.h>
int main()
{
	char str[100];
	int i,count=1;
	printf("Enter Sentence To Count Word :");
	gets(str);
	
	for(i=0;str[i];i++)
	{
		if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
		{
			count++;
		}
	}
	printf("Total %d Word In Your Given Sentence.",count);
}

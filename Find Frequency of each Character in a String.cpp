/* C Program to Find Frequency of each Character in a String */
#include<stdio.h>

int main()
{
	int i,freq[256]={0};
	char str[100];
	
	printf("Enter String :");
	gets(str);
	for(i=0; str[i];i++)
	{
		freq[str[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(freq[i] !=0)
		{
			printf("'%c' Occurs %d Times \n", i, freq[i]);
		}
	}
}

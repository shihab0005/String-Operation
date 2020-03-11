/* C Program to Remove Last Occurrence of a Character in a String

Enter String :shihab khan DhAKA
Enter Character to Remove Last Occurrence: a
after Removing Last occurrence of 'a' = shihab khn DhAKA

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch;
	int i,len,index=-1;
	printf("Enter String :");
	gets(str);
	
	printf("Enter Character to Remove Last Occurrence: ");
	scanf("%c",&ch);
	
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==ch){
			index=i;
		}
	}
	if(index !=-1)
	{
		i=index;
		while(i<len){
			str[i]=str[i+1];
			i++;
		}
	}
	printf("after Removing Last occurrence of '%c' = %s",ch,str);
	
}

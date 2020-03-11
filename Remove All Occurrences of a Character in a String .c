/* C Program to Remove All Occurrences of a Character in a String 


Enter String :shihab khan
Enter Character to Remove All occurrence Of Character : a
The Final String after Removing All Occurrences of 'a' = shihb khn



*/
#include<Stdio.h>
#include<string.h>

int main()
{
	int i,j,len=0;
	char str[100],ch;
	printf("Enter String :");
	gets(str);
	
	printf("Enter Character to Remove All occurrence Of Character : ");
	scanf("%c",&ch);
	
	for(i=0;str[i];i++){
		len++;
	}
	for(i=0;i<len;i++)
	{
		if(str[i]==ch)
		{
		 for(j=i;j<len;j++)
		 {
		 	str[j]=str[j+1];
		 }
		 len--;
		 i--;
		}
	}
	printf("\n The Final String after Removing All Occurrences of '%c' = %s ", ch, str);
}

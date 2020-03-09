/* C Program to Find Maximum Occurring Character in a String */
 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char str[100],result;
 	int i,len,freq[256]={0},max=-1;
 	printf("Enter String :");
 	gets(str);
 	len=strlen(str);
 	for(i=0;i<len;i++)
 	{
 		freq[str[i]]++;
	 }
	 
	 for(i=0;i<len;i++)
	 {
	 	if(max<freq[str[i]])
	 	{
	 		max=freq[str[i]];
	 		result=str[i];
		 }
	 }
	printf("\n The Maximum Occurring Character in a Given String = %c ", result);
 }

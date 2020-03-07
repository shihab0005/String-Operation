/** 
 * C program to convert string to lowercase
 */
 #include<stdio.h>
 int main()
 {
 	char str[100];
 	int i;
 	printf("Enter String :");
 	gets(str);
 	for(i=0;str[i];i++)
 	{
 		if(str[i]>='A' && str[i]<='Z')
 		{
 			str[i]=str[i]+32;
		 }
	 }
	 printf("After Convert string to uppercase :%s",str);
 }

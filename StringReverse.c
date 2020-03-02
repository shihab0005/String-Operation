/**
 * C program to find reverse of a string
 */
 #include<stdio.h>
 int main()
 {
 	char str[100],revStr[100]={'\0'};
 	int i=0,len=0;
 	printf("Enter String To Reverse :");
 	gets(str);
 	
 	while(str[i] !='\0'){
 		len++;
 		i++;
	 }
 	
 	for(i=len-1;i>=0;i--)
 	{
 		revStr[len-i-1]=str[i];
	 }
	 revStr[i]='\0';
	 printf("After Reverse = %s",revStr);
 }

/**
 * C program to find reverse of a string using WHile Loop
 */
 #include<stdio.h>
 int main()
 {
 	char str[100],revStr[100]={'\0'};
 	int len=0,i=0;
 	printf("Enter String :");
 	gets(str);
 	
 	while(str[i])
 	{
 		len++;
 		i++;
	 }
	 
	int revIndex=0;
	int startIndex=len-1;
	 while(startIndex>=0)
	 {
	 	revStr[revIndex]=str[startIndex];
	 	startIndex--;
	 	revIndex++;
	 	
	 }
	 printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", revStr);
 }

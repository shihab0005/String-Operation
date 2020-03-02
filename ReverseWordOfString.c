/**
 * C program to reverse order of words in a string
 */
 
 #include<stdio.h>
 #include<string.h>
 
 int main()
 {
 	char str[100];
 	int i,j,len,startIndex,endIndex;
 	printf("Enter A String :");
 	gets(str);
 	
 	len= strlen(str);
 	endIndex= len-1;
 	
 	for(i=endIndex; i>=0; i--)
 	{
 		if(str[i]==' ' || i==0)
 		{
 			if(i==0)
 			{
 				startIndex = 0;
 				
			 }
			 else
			 {
			 	startIndex =i+1;
			 }
			 for(j=startIndex; j<=endIndex; j++)
			 {
			 	printf("%c",str[j]);
			 }
			 endIndex=i-1;
			 printf(" ");
		 }
	 }
 }

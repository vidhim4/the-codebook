//wap to reverse a string
#include <stdio.h>
int main()
{
	char s[100],t;
	int n=0,i,j;
	printf("enter any string: ");
	gets(s);				
	while (s[n]!='\0')
	{
		n++;
	}			
	for (i=0,j=n-1;i<n/2;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;	
	}
	printf("your string is ");
	puts(s);		
	return 0;
}

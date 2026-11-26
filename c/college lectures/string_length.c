#include <stdio.h>
int main()
{
	char s[100];
	int i;
	printf("enter any string: ");
	gets(s);		
	while (s[i]!='\0')
	{
		i++;
	}			
	printf("your string is :  ");
	puts(s); 				
	printf("length of string : %d",i);		
	return 0;
}

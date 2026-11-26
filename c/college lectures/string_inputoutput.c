#include <stdio.h>
int main()
{
	char s[100];
	printf("enter any string: ");
	//scanf("%s",s);						// doesnt read after space
	gets(s);								//s is destination char array -string input 
	printf("your string is :  ");
	puts(s); 								//display string present in char array -string output
	return 0;
}

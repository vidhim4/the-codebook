//wap to convert all lowercase aplhphabets to upper case 
//a(97) ----> A(65) (-32)
#include <stdio.h>
int main()
{
	char s[100];
	int i=0;
	printf("enter any string: ");
	gets(s);		
	while (s[i]!='\0')
	{	
		if (s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		i++;
	}			
	printf("your string is :  ");
	puts(s); 				
		
	return 0;
}

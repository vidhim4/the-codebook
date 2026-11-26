// wap to count number vowels ,consolnets,digits and special char present in a string

#include <stdio.h>
#include <ctype.h>
int main()
{
	char s[100];
	int i=0,con=0,vow=0,dig=0,special=0;
	printf("enter any string: ");
	gets(s);		
	while (s[i]!='\0')
	{	
		s[i]=tolower(s[i]);
		if (s[i]>='a'&&s[i]<='z')
		{
			if (s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				vow++;
			}
			else
			{
				con++;
			}
		}
		else if (s[i]>='0'&&s[i]<='9')
		{
			dig++;
		}
		else
		{
			special++;
		}
		i++;
	}			
	printf("consonants  : %d  \n" ,con);
	printf("vowels  : %d  \n" ,vow);
	printf("digits  : %d \n" ,dig);
	printf("special characters  : %d \n" ,special);
				
		
	return 0;
}

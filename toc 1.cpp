#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("enter a string:");
	scanf("%s",string);
	if(string[0]=='a'&&string[strlen(string)-1]=='a')
	{
		int i;
		for(i=0;i<strlen(string);i++)
		{
			if(string[i]=='0'||string[i]=='1')
			{
				printf("invalid!\n");
				return 0;
			}
		}
		printf("string is accepted\n");
	}
	else
	{
		printf("string is not accepted\n");
	}
	return 0;
}

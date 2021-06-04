#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int fanpai(char * str, int strlen)
{
	int i = 0;
	char new = str[0];
	printf("%s", str[i]);
	int k = 0;

	for (i = 1; i < strlen; i++)
	{
		if (new == str[i])
		{
			if (new == 'w')
			{
				str[i] = 'b';
				
			}
			else
			{
				str[i] = 'w';
			}
			k++;
			new = str[i];
		}
		else
		{
			new = str[i];
		}	
	}
	return k;
}









int main()
{

	fanpai("wbwwwb", 7);

	system("pause");

}
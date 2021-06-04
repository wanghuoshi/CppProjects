/*
请实现一个函数，将一个字符串中的空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
1秒 空间限制：32768K
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Solution 
{
public:
	void replaceSpace(char *str, int length);
};

void Solution::replaceSpace(char *str, int length)
{
	if (NULL == str || length <= 0)
	{
		return;
	}

	int i = 0;
	int new_len = 0;
	int j = 0;
	char * pstr = str;
	char * new_str = NULL;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			j++;
		}
	}

	new_len = length - j + j * 3;
	new_str = (char *)malloc(sizeof(char) * new_len );
	memset(new_str, 0x00, (sizeof(char) * new_len) );
	int k = new_len;
	while (new_len >= 0 && length >= 0)
	{
		if (str[length] == ' ')
		{
			new_str[k--] = '0';
			new_str[k--] = '2';
			new_str[k--] = '%';
		}
		else
		{
			new_str[k--] = str[length];
		}
		length--;
	}


	cout << new_str << endl;
	
}








int main(){

	class Solution new_so;
	new_so.replaceSpace("We Are Happy", 13);

	system("pause");
	return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
2.ʹ�ûص���������дһ����������ʵ�ֶ����������ļӼ������������ӿ����£�
int caculator(int a, int b, int(*func)(int, int))��

*/

int add(const int a, const int b)
{
	return a + b;
}
int  enu(const int a, const int b)
{
	return a - b;
}


int caculator(const int a, const int b, int(*func)(int, int))
{
	int new_a = a;
	int new_b = b;
	int c = 0;
	c = func(new_a, new_b);

	printf("%d\n",c);
	return 0;
}


int main()
{
	caculator(2, 3, enu);
	system("pause");

	return 0;
}
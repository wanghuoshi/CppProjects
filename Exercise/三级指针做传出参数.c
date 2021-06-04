#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

1.现有三个字符串“itcast”，“itheima”，“helloworld”，
要求实现一个函数（接口）把这三个字符串存放到堆区。
要求：使用三级指针作为指针输出这个堆空间的地址。接口如下：
int getArray(char ** myarray1,char ***newp, int num);
函数参数：
myarray1：	原字符串数组
newp：		要存储的字符串数组
num：		字符串数组个数
返回值：
成功 	返回0 ，
失败	返回-1
void freeArray(char ***newpfree, int num);	//释放内存函数

*/



//释放函数
void freeArray(char ***newpfree, int num)
{
	int i = 0;
	if ( (*newpfree) == NULL)
	{
		printf("传入的参数为空！");
		return;
	}

	for (i = 0; i < num; i++)
	{
		if ((*newpfree)[i] != NULL)
		{
			free((*newpfree)[i]);
			(*newpfree)[i] = NULL;
		}
	}
	free(*newpfree);
	*newpfree = NULL;
}



//三级指针作为传出参数
int getArray(char ** myarray1, char ***newp, int num)
{
	if (NULL == myarray1 || NULL == newp || num == 0)
	{
		printf("传入的参数不能为空！\n");
		return -1;
	}

	char **newpp = (char **)malloc(sizeof(char *) * num);
	memset(newpp, 0x00, sizeof(char *) * num);

	int i = 0;
	for (i = 0; i < num; ++i)
	{
		newpp[i] = malloc(sizeof(char) * strlen(myarray1[i]) + 1);
		strcpy(newpp[i], myarray1[i]);
	}

	*newp = newpp;

	return 0;
}



int test01()
{

	char *myarray1[3] = { "itcast", "itheima", "helloworld" };
	char ** newp = NULL;
	getArray(myarray1, &newp, 3);
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", newp[i]);
	}

	freeArray(&newp, 3);

	return 0;
}




int main()
{
	test01();
	system("pause");
	return 0;
}
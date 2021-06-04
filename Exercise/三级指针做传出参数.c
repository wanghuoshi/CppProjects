#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

1.���������ַ�����itcast������itheima������helloworld����
Ҫ��ʵ��һ���������ӿڣ����������ַ�����ŵ�������
Ҫ��ʹ������ָ����Ϊָ���������ѿռ�ĵ�ַ���ӿ����£�
int getArray(char ** myarray1,char ***newp, int num);
����������
myarray1��	ԭ�ַ�������
newp��		Ҫ�洢���ַ�������
num��		�ַ����������
����ֵ��
�ɹ� 	����0 ��
ʧ��	����-1
void freeArray(char ***newpfree, int num);	//�ͷ��ڴ溯��

*/



//�ͷź���
void freeArray(char ***newpfree, int num)
{
	int i = 0;
	if ( (*newpfree) == NULL)
	{
		printf("����Ĳ���Ϊ�գ�");
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



//����ָ����Ϊ��������
int getArray(char ** myarray1, char ***newp, int num)
{
	if (NULL == myarray1 || NULL == newp || num == 0)
	{
		printf("����Ĳ�������Ϊ�գ�\n");
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
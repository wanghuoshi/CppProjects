#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*

3.����5������10��50��20��90��30������������ӿڷֱ�ʵ�ִ�ӡ���ܺ������ܡ�
�����ӿ����£�
void MySort(int arr[], int len);				// ����
void PrintArray(int arr[], int len);    	//��ӡ����

*/

void MySort(int arr[], int len)
{
	if (len == 0 || arr == NULL)
	{
		return;
	}
	int i = 0;
	for (i = 0; i < len - 1 ; i++)
	{
		int j = 0;
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	
	for (i = 0; i < len; i++)
	{
		printf("%d ",arr[i]);
	}


}



int main()
{
	int arr[5] = { 10, 50, 20, 90, 30 };
	MySort(arr, 5);
	system("pause");
	return 0;
}
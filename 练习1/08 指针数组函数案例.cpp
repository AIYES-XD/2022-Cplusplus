#include <iostream>
using namespace std;

/// <summary>
/// ð������
/// </summary>
/// <param name="arr">���������</param>
/// <param name="len">���鳤��</param>
void bubbleSort(int * arr ,int len) {
	for (int count = 0; count < len-1; count++) 
	{
		for (int count2 = 0; count2 < len - count - 1; count2++)
		{
			if (arr[count2] > arr[count2 + 1])
			{
				int temp = arr[count2];
				arr[count2] = arr[count2 + 1];
				arr[count2 + 1] = temp;
			}
			

		}
	}
}
/// <summary>
/// ������
/// </summary>
/// <param name="arr">���������</param>
/// <param name="len">���鳤��</param>
void printArray(int * arr, int len) {
	for (int count = 0; count < len; count++) {
		cout << arr[count] << endl;
	}
}

int main()
{
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};
	//ͨ����ѯ������ռ���ڴ���Ե�������ɷ�ռ���ڴ�,�������ĳ���
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,len);
	printArray(arr,len);
		return 0;
}

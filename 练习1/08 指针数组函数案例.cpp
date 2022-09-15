#include <iostream>
using namespace std;

/// <summary>
/// 冒泡排序
/// </summary>
/// <param name="arr">传入的数组</param>
/// <param name="len">数组长度</param>
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
/// 输出语句
/// </summary>
/// <param name="arr">传入的数组</param>
/// <param name="len">数组长度</param>
void printArray(int * arr, int len) {
	for (int count = 0; count < len; count++) {
		cout << arr[count] << endl;
	}
}

int main()
{
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};
	//通过查询数组总占用内存除以单个数组成分占用内存,获得数组的长度
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr,len);
	printArray(arr,len);
		return 0;
}

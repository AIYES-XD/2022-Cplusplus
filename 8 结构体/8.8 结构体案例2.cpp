#include <iostream>
#include <ctime>
using namespace std;
struct Hero {
	//����
	string name;

	//����
	int age;

	//�Ա�
	string sex;
};
//��������
void bubleSort(struct Hero heroArray[], int len) 
{
	for (int count = 0; count < len - 1; count++) 
	{
		for (int countt = 0; countt < len - count - 1; countt++) 
		{
			//���countt�±��Ԫ�ش���countt+1�±�Ԫ�ص�����,��������Ԫ��
			if (heroArray[countt].age > heroArray[countt + 1].age) 
			{
				struct Hero temp = heroArray[countt];
				heroArray[countt] = heroArray[countt + 1];
				heroArray[countt + 1] = temp;
				//�������д�����û������ʱ�ڿ���̨�鿴�Ƿ񾭹��Ĳ��Դ���
				//cout<<"����" << endl;
			}
		}
	}
}
//�������
void printHero(struct Hero heroArray[], int len) 
{
	for (int count = 0; count < len; count++)
	{
		cout << "Ӣ������" << heroArray[count].name << "Ӣ������" << heroArray[count].age << "Ӣ���Ա�" << heroArray[count].sex << endl;
	}
}
int main()  {
	//���Ӣ�۵Ľṹ��,
	//�������������Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",19,"Ů"},
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	printHero(heroArray, len);
	cout << endl;
	//�������������
	bubleSort(heroArray, len);

	//�����������ӡ���
	printHero(heroArray, len);

	
}
#include <iostream>
#include <ctime>
using namespace std;
/// <summary>
/// ѧ���ṹ��
/// </summary>
struct Student
{
	string sName;
	int score;
};
/// <summary> 
/// ��ʦ�ṹ��
/// </summary>
struct Teacher 
{
	string tName;
	//����ѧ������
	struct Student sArray[5];
};
//����ʦ��ѧ����ֵ�ĺ���

void allocateSpace(struct Teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	for (int count = 0; count < len; count++) 
	{
		tArray[count].tName = "Teacher";
		tArray[count].tName += nameSeed[count];
		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int countt = 0; countt < 5; countt++) 
		{
			tArray[count].sArray[countt].sName = "Student_";
			tArray[count].sArray[countt].sName += nameSeed[countt];
			//����������˼������һ��0~60�������,Ȼ���40
			int random = rand() % 61 + 40;
			tArray[count].sArray[countt].score = random;
			
		}
	}
}
void printInfo(struct Teacher tArray[],int len) 
{
	for (int count = 0; count < len; count++) 
	{
		cout << "��ʦ������" << tArray[count].tName<<endl;
		for (int countt = 0; countt < 5; countt++) {
			cout<<"\t " << "��" << countt + 1 << "��ѧ����������:" << tArray[count].sArray[countt].sName << "�ɼ���:" << tArray[count].sArray[countt].score << endl;
		}
		cout << endl;
	}
}
int main() {
	//���������
	srand((unsigned int)time(NULL));
	//����������ʦ������
	struct Teacher tArray[3];

	//ͨ��������3����ʦ����Ϣ��ֵ,������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//��ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray, len);

}
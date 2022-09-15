#include <iostream>
#include <ctime>
using namespace std;
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1.�����ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����,��������Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼����,�޷����!" << endl;
		return;
	}
	else
	{
		//��Ӿ������ϵ��
		//����
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�:" << endl;
		cout << "1.---��" << endl;
		cout << "2.---Ů" << endl;
		int sex = 0;
		while (true) 
		{
			//��������������ȷ,�˳�ѭ��,�������,����������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "��������,����������" << endl;
		}
		
		//����
		cout << "����������:" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//�绰
		cout << "������绰:" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//סַ
		cout << "������סַ:" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause");//�����������
		system("cls");//��������
	}
	
}

//2.��ʾ��ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ��,���Ϊ��,��ʾ��¼Ϊ��
	//�����Ϊ��,��ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else 
	{
		for (int count = 0; count < abs->m_Size; count++) 
		{
			cout << "����:" << abs->personArray[count].m_Name << "\t";
			cout << "�Ա�:" << (abs->personArray[count].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "����:" << abs->personArray[count].m_Age << "\t";
			cout << "�绰:" << abs->personArray[count].m_Phone << "\t";
			cout << "סַ:" << abs->personArray[count].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//�˵�����
void shouMenu() {
	cout << "******************" << endl;
	cout << "***1.�����ϵ��***" << endl;
	cout << "***2.��ʾ��ϵ��***" << endl;
	cout << "***3.ɾ����ϵ��***" << endl;
	cout << "***4.������ϵ��***" << endl;
	cout << "***5.�޸���ϵ��***" << endl;
	cout << "***6.�����ϵ��***" << endl;
	cout << "***0.�˳�ͨѶ¼***" << endl;
	cout << "******************" << endl;
}

//�����ϵ���Ƿ����,�������,������ϵ�����������еľ���λ��,�����ڷ���-1
int isExist(Addressbooks *abs,string name) 
{
	for(int count =0 ; count < abs->m_Size;count++)
	{
		// ����ð����������û����������
		if (abs->personArray[count].m_Name == name)
		{
			return count;

		}
	}
	//����������Ҳû���ҵ�,����-1
	return -1;

}

//3.ɾ��ָ����ϵ��
void deletPerson(Addressbooks * abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//���ҵ�����,ִ��ɾ������
		for (int count = 0; count < abs->m_Size; count++)
		{
			//����Ǩ��
			abs->personArray[count] = abs->personArray[count + 1];	
		}
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
}

int main() {
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;
	
	//�����û�ѡ���¼����
	int select = 0;

	////�˵�����
	//shouMenu();

	//cin >> select;
	while (true) {
		//�˵�����
		shouMenu();
		cin >> select;

		switch(select) {
		case 1:		//�����ϵ��
			addPerson(&abs);//���õ�ַ����,��������ʵ��
			break;
		case 2:		//��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:		//ɾ����ϵ��
			
			deletPerson(&abs);

		/*{
			cout << "��������ϵ������" << endl;
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ��û�" << endl;
			}
		}*/
			
			break;
		case 5:		//������ϵ��
			break;
		case 6:		//�����ϵ��
			break;
		case 0:		//�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}

	system("pause");
	return 0;
}
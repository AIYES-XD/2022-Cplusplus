#include <iostream>
using namespace std;

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName() 
	{
		return m_Name;
	}
	//��ȡ����
	int getAge() 
	{
		return m_Age;
	}
	//��������
	void setLover(string lover)
	{
		m_Lover = lover;
	}



private:
	//���� �ɶ���д
	string m_Name;
	//���� ֻ��
	int m_Age;
	//���� ֻд
	string m_Lover;
};



int main() {

}
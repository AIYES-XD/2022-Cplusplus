#include <iostream>
using namespace std;
//����Ȩ��
//����
//����Ȩ��	public		���ڿ��Է���	������Է���
//����Ȩ��	protected	���ڿ��Է���	���ⲻ���Է��� �̳е�Ҳ���Է��ʵı�������
//˽��Ȩ��	private		���ڿ��Է���	���ⲻ���Է��� �̳еĲ����Է���˽�е�����

class Person
{
public :
	//����Ȩ��
	string m_Name;

protected:
	//����Ȩ��
	string m_Car;

private:
	//˽��Ȩ��
	int m_Password;
	
public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 1234;
	}
};

int main(){
	Person p1;
	p1.m_Name = "����";

}
#include <iostream>
using namespace std;

class Person
{
public :
	//thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�

	//const Person * const this;	��仰�е�thisָ�򲻿����޸�,ָ���ֵҲ�������޸�
	//�ڳ�Ա���������const ���ε���thisָ��,��ָ��ָ���ֵҲ�������޸�
	void showPerson() const
	{
		m_B = 100;

		//this->m_A = 100;

		// thisָ�벻�����޸�ָ���ָ��
		//this->NULL;
	}
	void func()
	{
	}

	int m_A;
	mutable int m_B;	//�������,��ʹ�ڳ�������,���ֵҲ�����޸�
};

void test01()
{
	Person p;
	p.showPerson();
}

//������
void test02()
{
	const Person p;		//�ڶ���ǰ��const,��Ϊ������
	p.m_A = 100;
	p.m_B = 100;		//m_B������ֵ,�ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	p.func();//�����󲻿��Ե�����ͨ��Ա����,��Ϊ��ͨ��Ա���������޸�����
}

int main(){
	test01();
}
#include <iostream>
using namespace std;

class CPU;
class VideoCard;
class Memory;
class Computer;
class InterCPU;
class InterVideoCard;
class InterMemory;
class LenovoCPU;
class LenovoVideoCard;
class LenovoMemory;


//����Ĵ�������
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//������Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//������ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;//cpu���ָ��
	VideoCard* m_vc;//�Կ�ָ��
	Memory* m_mem;//�ڴ���ָ��

};

class InterCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "IntelCPU��ʼ������!" << endl;
	}
};

class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel�Կ���ʼ��ʾ��!" << endl;
	}
};

class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel�ڴ濪ʼ������!" << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "LenovoCPU��ʼ������!" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo�Կ���ʼ��ʾ��!" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo�ڴ濪ʼ������!" << endl;
	}
};

void test01()
{
	CPU* intelCPU = new InterCPU;
	VideoCard* intelCard = new InterVideoCard;
	Memory* intelMem = new InterMemory;

	CPU* lenovoCPU = new LenovoCPU;
	VideoCard* lenovoCard = new LenovoVideoCard;
	Memory* lenovoMem = new LenovoMemory;

	//������һ̨����
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;

	//�����ڶ�̨����
	Computer* computer2 = new Computer(lenovoCPU, lenovoCard, lenovoMem);
	computer2->work();
	delete computer2;
}


int main() {
	test01();
}
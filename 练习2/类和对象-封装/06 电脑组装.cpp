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


//抽象的处理器类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//抽象的显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象的内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
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
	CPU* m_cpu;//cpu零件指针
	VideoCard* m_vc;//显卡指针
	Memory* m_mem;//内存条指针

};

class InterCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "IntelCPU开始计算了!" << endl;
	}
};

class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel显卡开始显示了!" << endl;
	}
};

class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel内存开始储存了!" << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "LenovoCPU开始计算了!" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo显卡开始显示了!" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo内存开始储存了!" << endl;
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

	//创建第一台电脑
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;

	//创建第二台电脑
	Computer* computer2 = new Computer(lenovoCPU, lenovoCard, lenovoMem);
	computer2->work();
	delete computer2;
}


int main() {
	test01();
}
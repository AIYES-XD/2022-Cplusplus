#include <iostream>
using namespace std;

//立方体类设计
// 1. 创建立方体
// 2. 设计属性和
// 3. 设计行为 获取立方体的面积和体积
// 4. 分别利用全局函数和成员函数判断两个立方体是否相等

class Cube
{	
public:

	// 设置长
	void setL(int l)
	{
		m_L = l;
	}

	// 获取长
	int  getL()
	{
		return m_L;
	}
	
	// 设置宽
	void setW(int w)
	{
		m_W = w;
	}

	// 获取宽
	int  getW()
	{
		return m_W;
	}
	
	// 设置高
	void setH(int h)
	{
		m_H = h;
	}

	// 获取高
	int  getH()
	{
		return m_H;
	}
	
	// 获取立方体面积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}

	// 获取立方体体积
	int calculateV()
	{
		return m_L * m_W * m_H;
	}
	bool isSameByClass(Cube& c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;

	}
	
private:

	int m_L;	//长
	int m_W;	//宽
	int m_H;	//高

};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)//使用引用就不用创造新的数据了
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}


int main() {
	Cube c1;
	c1.setL(20);
	c1.setW(10);
	c1.setH(10);
	cout << "test" << endl;
	
	cout << "c1的面积是" << c1.calculateS() << endl;
	cout << "c1的体积是" << c1.calculateV() << endl;


	Cube c2;
	c2.setL(20);
	c2.setW(10);
	c2.setH(10);

	bool ret = isSame(c1, c2);
	if (ret) 
	{
		cout << "c1和c2是相等的" << endl;
	}
	else {
		cout << "c1和c2是不相等的" << endl;
	}

	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "Class,c1和c2是相等的" << endl;
	}
	else {
		cout << "Class,c1和c2是不相等的" << endl;
	}

}


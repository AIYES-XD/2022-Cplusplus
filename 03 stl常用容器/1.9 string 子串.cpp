#include <iostream>
#include <string>
void test01()
{
	std::string str = "abcdef";

	std::string subStr = str.substr(1, 3);

	std::cout << "subStr = " << subStr << std::endl;
}

void test02()
{
	std::string email = "ming_aiye@gmail.com";
	int pos = email.find("@");
	if (pos == -1)
	{
		std::cout << "错误的电子邮箱" << std::endl;
	}
	else
	{
		std::string username = email.substr(0, pos);
		std::cout << "用户名为: " << username << std::endl;
	}
}


int main()
{
	test01();
	test02();
}
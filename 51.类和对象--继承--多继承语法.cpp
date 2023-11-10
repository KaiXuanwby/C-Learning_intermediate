//C++允许一个类继承多个类
//语法：class  子类 ：继承方式  父类1 ， 继承方式  父类2,， ......
//多继承可能会引发父类中有同名成员出现，需要加作用域区分
//todo C++实际开发中不建议用多继承
#include<iostream>
using namespace std;

class Base5101
{
public:
	Base5101()
	{
		m_A = 100;
	}

	int m_A;
};

class Base5102
{
public:
	Base5102()
	{
		m_A = 200;
	}
	int m_A;

};

class Son5101:public Base5101,public Base5102
{
public:
	Son5101()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};

void test5101()
{
	Son5101 s;
	cout << "子类对象s占据的空间为：" << sizeof(s) << endl;
	//todo当父类中出现同名成员，需要加作用域区分
	cout << "Base1---m_A = " << s.Base5101::m_A << endl;
	cout << "Base2---m_A = " << s.Base5102::m_A << endl;
}

int main51()
{
	test5101();

	system("pause");
	return 0;
}
//继承同名静态成员处理方式
//问题：继承中同名的静态成员在子类对象上如何进行访问？
//静态成员和非静态成员出现同名，处理方式一致
//todo  访问子类同名成员  直接访问即可
//todo  访问父类同名成员  需要加作用域
#include<iostream>
using namespace std;

class Base50
{
public:
	static void func()
	{
		cout << "Base--static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base--static void func(int a)" << endl;
	}

	static int m_A;
};
int Base50::m_A = 100;


class Son50:public Base50
{
public:
	static void func()
	{
		cout << "Son--static void func()" << endl;
	}

	static int m_A;
};

int Son50::m_A = 200;

void test5001()
{
	Son50 s;
	//同名静态成员
	//通过对象访问
	cout << "Son---m_A = " << s.m_A << endl;
	cout << "Base--m_A = " << s.Base50::m_A << endl;
	//通过类名访问
	cout << "Son---m_A = " << Son50::m_A << endl;
	cout << "Base--m_A = " << Base50::m_A << endl;  //直接访问父类
	cout << "Base--m_A = " << Son50::Base50::m_A << endl;//todo通过子类的类名访问父类对象
	
	//同名静态成员函数
	//通过对象访问
	s.func();
	s.Base50::func();
	//通过类名访问
	Son50::func();
	Base50::func();
	Son50::Base50::func();
}

int main50()
{
	test5001();
	system("pause");
	return 0;
}
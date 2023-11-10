//问题：当子类与父类出现同名成员，如何通过子类对象，访问到子类或者父类中同名的数据？
//todo  访问子类同名成员  直接访问即可
//todo  访问父类同名成员  需要加作用域

#include<iostream>
using namespace std;

class Base49
{
public:
	Base49()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base--func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Base--func(int a)调用" << endl;
	}

	void funk()
	{
		cout << "Base--funk()调用" << endl;
	}
	int m_A;
};

class Son49:public Base49
{
public:
	Son49()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son--func()调用" << endl;
	}
	int m_A;
};

void test4901()
{
	Son49 s;
	cout << "Son---m_A = " << s.m_A << endl;
	//如果通过子类对象  访问到父类中的同名成员，需要加入作用域
	cout << "Base---m_A = " << s.Base49::m_A << endl;
}

void test4902()
{
	Son49 s;
	s.func();
	s.Base49::func();
	//todo  如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员函数
	//todo  如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	s.Base49::func(10);
	s.funk();
}

int main49()
{
	test4901();
	test4902();
	system("pause");
	return 0;
}
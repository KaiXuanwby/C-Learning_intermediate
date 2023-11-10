//编译器至少给一个类添加四个函数
//默认构造函数（无参，函数体为空）
//默认析构函数（无参，函数体为空）
//默认拷贝构造函数，对属性值进行拷贝
//赋值运算符 operator = ,对属性值进行拷贝

//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝的问题
#include<iostream>
using namespace std;

class Person42
{
public:
	Person42(int age)
	{
		m_Age = new int(age);
	}

	~Person42()               //报错是因为堆区的内存重复释放，解决方案：利用深拷贝解决浅拷贝带来的问题
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//重载赋值运算符
	Person42& operator=(Person42 &p1)
	{
		//编译器提供的是浅拷贝
		//m_Age = p1.m_Age;

		//先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		//深拷贝
		m_Age = new int(*p1.m_Age);

		//返回对象本身
		return *this;
	}
	int *m_Age;
};

void test4201()
{
	Person42 p1(18);
	Person42 p2(20);
	p2 = p1;  //赋值操作：如果套用的是类中默认的重载运算，其实质是浅拷贝，在某些情况下，会出现问题，需要改成深拷贝

	cout << "p1的年龄为：" << *p1.m_Age << endl;
	cout << "p2的年龄为：" << *p2.m_Age << endl;
}

void test4202()
{
	Person42 p1(18);
	Person42 p2(20);
	Person42 p3(35);

	p1 = p2 = p3;       //链式调用--该函数调用完之后仍然可以返回自身，参加下一次的调用

	cout << "p1 = " << *p1.m_Age << endl;
	cout << "p2 = " << *p2.m_Age << endl;
	cout << "p3 = " << *p3.m_Age << endl;

}
int main42()
{

	test4201();
	test4202();
	int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}

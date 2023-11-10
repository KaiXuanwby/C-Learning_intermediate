//    静态成员函数
//		所有对象共享同一个函数
//		静态成员函数只能访问静态成员变量
#include<iostream>
using namespace std;

class Person31
{
public:
	//静态成员函数
	static void func()
	{
		per_A = 100;  //静态的成员函数可以访问静态的成员变量
		//per_B = 90;         //静态成员函数  不可以访问  非静态成员变量， 无法区分到底是哪个对象的成员属性
		cout << "static void func()的调用" << endl;
	}

	static int per_A;
	int per_B;

	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2()的调用" << endl;
	}
};

int Person31::per_A;

void test3101()
{
	//1、通过对象进行访问
	Person31 p;
	p.func();

	//2、通过类名进行访问
	Person31::func();

	//静态成员函数的访问权限
	Person31 p2;
	//p2.func2();
	//Person31::func2()           类外访问不到私有的静态成员函数
}

int main31()
{

	test3101();
	system("pause");
	return 0;
}
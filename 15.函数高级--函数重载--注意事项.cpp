//引用作为重载条件
//函数重载碰到函数默认参数

#include<iostream>
using namespace std;

//引用作为重载条件
void func1501(int& a)   //int & a = 10;  不合法的
{
	cout << "fun(int& a)的调用" << endl;
}

void func1501(const int& a)  //const int& a = 10;  合法
{
	cout << "fun(const int& a)的调用" << endl;
}

///函数重载碰到函数默认参数
void fun1502(int a,int b = 10)
{
	cout << "fun1502(int a)的调用" << endl;
}

void fun1502(int a)
{
	cout << "fun1502(int a)的调用" << endl;
}

int main15()
{
	int a = 10;
	func1501(a);
	func1501(10);

	//fun1502(2); //函数重载碰到函数默认参数, 出现二义性，报错
	system("pause");
	return 0;
}
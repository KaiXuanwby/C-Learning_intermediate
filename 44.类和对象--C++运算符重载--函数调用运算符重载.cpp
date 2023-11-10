//函数调用运算符（）也可以重载
//由于重载后使用的方式非常像函数的调用，因此称为仿函数
//仿函数没有固定写法，非常灵活
#include<iostream>
using namespace std;

class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void test4401()
{
	MyPrint myprint;

	myprint("hello world");  //由于使用起来非常类似于函数调用，因此称为仿函数
}
//仿函数非常灵活，没有固定的写法
//加法类

class Myadd
{
public:

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test4402()
{
	Myadd myadd;
	cout << "\t" << myadd(20, 30) << endl;
	
	//匿名函数对象
	cout << Myadd()(100, 100) << endl;  //Myadd()  就是匿名对象，匿名对象在这一行创建，执行完这个语句后立刻被释放
}     //匿名对象   ：  类 + （）

int main44()
{
	test4401();
	test4402();
	system("pause");
	return 0;
}
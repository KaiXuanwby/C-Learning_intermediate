//作用：函数名可以相同，提高复用性
//函数重载满足条件
//todo 同一个作用域下
//todo 函数名称相同
//todo 函数参数  类型不同  或者  个数不同  或者  顺序不同
//注意：函数的返回值不可以作为函数重载的条件
#include<iostream>
using namespace std;

//函数重载
//同一个作用域----全局作用域
void func14()
{
	cout << "func的调用" << endl;
}

void func14(int a)// 函数参数 个数不同
{
	cout << "\tfunc(int a)的调用!" << endl;
}

void func14(double a)// 函数参数 类型不同
{
	cout << "\tfunc(double a)的调用!" << endl;
}

void func14(int a,double b)// 函数参数 顺序不同
{
	cout << "\tfunc(int a,double b)的调用!" << endl;
}

void func14(double a, int b)// 函数参数 顺序不同
{
	cout << "\tfunc(double a, int b)的调用!" << endl;
}
int main14()
{
	func14();
	func14(10);
	func14(3.141);
	func14(10, 3.14);
	func14(3.14, 10);
	system("pause");
	return 0;
}
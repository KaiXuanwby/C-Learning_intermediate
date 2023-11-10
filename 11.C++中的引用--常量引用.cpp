//常量引用主要用于修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参
#include<iostream>
using namespace std;

//值传递会拷贝数据，占用内存
//打印数据函数
void showValue11( const int& val)
{
	//如果形参位置上加上const 值就不可以修改
	//val = 1000;
	cout << "val = " << val << endl;
}

int main11()
{
	int a = 10;
	int& ref1 = a;  
	//int& ref =10;   //引用必须引用一块合法的内存空间
	//加上const之后，编译器将代码修改   int temp = 10;   int& ref = temp;
	const int& ref2 = 10;
	//ref2 = 10;   //加上const之后变为只读，不可以修改

	a = 100;
	showValue11(a);
	cout << "a = " << a << endl;

	system("pasue");
	return 0;
}
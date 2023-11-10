//引用必须初始化
//引用在初始化后不可改变
#include<iostream>
using namespace std;

int main07()
{
	int a = 10;
	int b = 20;
	//int &c;  //错误，引用必须初始化
	int& c = a;  //一旦初始化后就不可以更改
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
	c = b;   // 赋值操作，而不是更改引用

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}
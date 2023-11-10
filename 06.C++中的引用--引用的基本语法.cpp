//作用：给变量起别名
//语法： 数据类型   &别名 = 原名    数据类型必须和原名相同
#include<iostream>
using namespace std;

int main06()
{
	int a = 10;
	int& b = a;
	cout << "a = " << a << endl;
	cout << "a = " << b << endl;
	cout << "a的地址为：" << (long long)&a << endl;
	cout << "b的地址为：" << (long long)&b << endl; //引用没有创建新的空间
	int* p = &a;
	cout << "p的地址为：" << (long long)&p << endl;//指针创建了新空间

	b = 100;
	cout << "a = " << a << endl;
	cout << "a = " << b << endl;
	system("pause");
	return 0;
}
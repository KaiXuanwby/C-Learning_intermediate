//函数传递参数时，可以利用引用的技术让形参修饰实参
//可以简化指针修改实参
//引用传递和地址传递的效果相同，引用的语法更清楚简单
#include<iostream>
using namespace std;

//值传递
void mySwap0801(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//地址传递
void mySwap0802(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
void mySwap0803(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main08()
{
	int a = 10;
	int b = 20;

	mySwap0801(a, b);    // 值传递，形参不会修饰实参

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	mySwap0802(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	mySwap0803(a, b);  //引用传递，形参会修饰实参，别名可以和原名相同
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
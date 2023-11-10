//C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法：   返回值类型  函数名 （数据类型）{ }
//在现阶段函数的占位参数存在的意义不大，但是后面的课程中会用到该技术
#include<iostream>
using namespace std;

//占位参数还可以有默认参数
void func13(int a, int = 10)
{
	cout << "this is func" << endl;
}

int main13()
{
	func13(10);
	system("pause");
	return 0;
}
/*
	程序运行后：
	堆区：
		由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
		在C++中，用new在堆区开辟内存
*/
#include<iostream>
using namespace std;

//在堆区开辟数据
int* func04()
{
	//利用new关键字将数据开辟到堆区
	//指针*p本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10); //返回的直接就是地址
	return p;
}
int main04()
{
	int* p = func04();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;//如果这里多次输出指针的地址，也会像03中的情况相同
	cout << *p << endl;

	system("pause");
	return 0;
}
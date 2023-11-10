/*
全局区：
	全局变量和静态变量以及常量存放在此
	该区域的数据在程序结束后由操作系统释放
*/
#include<iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的变量---->函数体外部--->全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main02()
{
	//局部变量
	int a = 10;
	int b = 10;
	//打印局部变量的地址
	cout << "局部变量a的地址为：" << (long long)&a << endl;
	cout << "局部变量b的地址为：" << (long long)&b << endl;

	//打印全局变量的地址
	cout << "全局变量g_a的地址为：" << (long long)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (long long)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	//打印静态变量的地址
	cout << "静态变量s_a的地址为：" << (long long)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (long long)&s_b << endl;

	//常量：字符串常量，const修饰的变量
	//打印字符串常量的地址
	cout << "字符串常量的地址为：" << (long long)&"hello world1" << endl;
	cout << "字符串常量的地址为：" << (long long)&"hello world2" << endl;

	//const修饰的变量---->函数体内部--->局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;
	//打印局部常量的地址
	cout << "局部常量c_l_a的地址为：" << (long long)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << (long long)&c_l_b << endl;

	//打印全局常量的地址
	cout << "全局常量c_g_a的地址为：" << (long long)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为：" << (long long)&c_g_b << endl;

	system("pause");
	return 0;
}
/*
	通过观察不同的地址来看存储的区域的不同
	总结：
		C++在程序运行前分为全局区和代码区
		代码区特点为共享和只读
		全局区中存放全局变量，静态变量，常量
		常量中存放const修饰的全局常量 和 字符串常量
		局部常量和局部变量存放在栈中
*/
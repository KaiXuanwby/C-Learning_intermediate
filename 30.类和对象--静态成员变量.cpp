//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
//静态成员分布：
//    静态成员变量
//		所有对象共享同一份数据
//		在编译阶段分配内存
//		类内声明，类外初始化
//    静态成员函数
//		所有对象共享同一个函数
//		静态成员函数只能访问静态成员变量
#include<iostream>
using namespace std;

class Person30
{
public:

	static int per_A;

	//静态成员变量也是有访问权限的
private:
	static int per_B;
};

int Person30::per_A = 100;   // todo 必须要在类外初始化操作（也就是必须要在类外写一下），不然会报错，可以不赋初始值，默认值为0
int Person30::per_B = 200;

void test3001()
{
	Person30 p1;
	cout << p1.per_A << endl;

	Person30 p2;
	p2.per_A = 200;
	cout << p1.per_A << endl;  //todo per_A是所有对象共享的数据，只要改变全都改变
}

void test3002()
{
	//静态成员变量  不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式  ( 在public权限下 )

	//1、通过对象进行访问
	Person30 p;
	cout << "p = " << p.per_A << endl;

	//2、通过类名进行访问
	cout << Person30::per_A << endl;
	//cout << Person30::per_B << endl;          类外访问不到私有的静态成员变量
}


int main30()
{
	//test3001();
	test3002();
	system("pause");
	return 0;
}
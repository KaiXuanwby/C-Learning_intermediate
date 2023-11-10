//  作用：C++提供了初始化列表语法，用来初始化属性
//  语法： 构造函数 ( ) : 属性1 ( 值1 )  , 属性2 ( 值2 ) ........ {  } 
//普通的初始化并不是真正意义上的初始化，在构造的时候先初始化了再进行赋值。初始化列表是真正意义的初始化，效率会高很多
#include<iostream>
using namespace std;

class Person28
{
public:

	//传统初始化操作
	/*Person28(int a, int b, int c)
	{
		per_A = a;
		per_B = b;
		per_C = c;
	}*/

	//初始化列表初始化属性
	Person28(int a, int b,int c) :per_A(a), per_B(b), per_C(c)
	{

	}
	//todo传统初始化赋值相当于（先声明类，再做赋值操作）
	//todo 初始化列表相当于（直接声明一个有初始值的类型），省略了赋值操作。在大型项目中，class类中成员变量极多的情况下，初始化列表的效率更高。

	int per_A;
	int per_B;
	int per_C;
};

void test2801()
{
	//Person28 p1(10, 20, 30);
	
	Person28 p1(30,20,10);
	cout << "per_A：" << p1.per_A << endl;
	cout << "per_B：" << p1.per_B << endl;
	cout << "per_C：" << p1.per_C << endl;
}


int main28()
{
	test2801();
	system("pause");
	return 0;
}
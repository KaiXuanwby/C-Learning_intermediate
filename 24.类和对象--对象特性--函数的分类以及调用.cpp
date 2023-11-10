// todo 构造函数的分类以及调用
//两种分类方式：
//按参数分为： 有参构造和无参构造
// 按类型分为：普通构造和拷贝构造
//三种调用方式：
//括号法
//显示法
//隐式转换法
#include<iostream>
using namespace std;

class Person24
{
public:
	//普通构造函数
	Person24()   //无参构造（默认构造）
	{
		cout << "Person无参构造函数的调用" << endl;
	}
	Person24(int a)  //有参构造
	{
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person24( const Person24 &p)   //引用用来防止递归调用拷贝构造函数
	{                              //有参构造
		//将传入的对象上的数据，拷贝到拷贝构造函数内的对象上
		cout << "Person拷贝构造函数的调用" << endl;
		age = p.age;
	}


	//析构函数
	~Person24()
	{
		cout << "Person析构函数的调用" << endl;
	}
	int age;
};

void test2401()
{
	//1、括号法
	Person24 p1; //默认构造函数调用
	Person24 p2(10);  //有参构造函数
	Person24 p3(p2);  //拷贝构造函数

	//todo 注意事项1
	//调用默认构造函数的时候，不要加()
	//因为如果加了括号，编译器会认为是一个函数的声明，不会认为在创建对象( Person24 p1 (  ) )


	/*cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;*/

	//2、显示法
	Person24 p4;
	Person24 p5 = Person24(10);  //有参构造
	Person24 p6 = Person24(p5);  //拷贝构造

	Person24(10);//匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名对象
	cout << "aaaaaa" << endl;

	//todo 注意事项2
	//不要利用拷贝构造函数来  初始化匿名对象
	//编译器会认为这是一个对象的声明   Person24 ( p6 ) ==== Person24 p6;

	//3、隐式转换法
	Person24 p7 = 10;  //相当于写了Person24  p7 = Person24 ( 10 )  有参构造
	Person24 p8 = p7;  //拷贝构造

}

int main24()
{
	test2401();
	system("pause");
	return 0;
}


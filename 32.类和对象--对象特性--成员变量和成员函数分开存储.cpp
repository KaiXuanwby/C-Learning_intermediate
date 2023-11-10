//在C++中，类内的成员变量和成员函数分开存储
//todo 只有非静态成员才属于类的对象上------------只有非静态成员变量属于创建的实例对象
#include<iostream>
using namespace std;

class Person32
{
public:
	int per_A;  //非静态的成员变量
	static int per_B;  //静态成员变量，不属于类的对象上

	void func() {}  //非静态成员函数 ， 不属于类的对象上
	static void func2() {}   //静态成员函数，不属于类的对象上
};

int Person32::per_B;

//对于空对象的解释
void test3201()
{
	Person32 p;
	//空对象占用的内存空间为：  1个字节
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//todo每个空对象也应该有一个独一无二的地址
	cout << "p占用的内存空间：" << sizeof(p) << endl;
}

void test3202()
{
	Person32 p;
	cout << "p占用的内存空间：" << sizeof(p) << endl;
}

int main32()
{
	//test3201();
	test3202();

	system("pause");
	return 0;
}
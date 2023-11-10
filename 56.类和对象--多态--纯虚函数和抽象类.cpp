//在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//因此可以将虚函数改为纯虚函数
//todo纯虚函数语法：  virtual  返回值类型  函数名 （参数列表） = 0 ；
//todo当类中有了纯虚函数，这个类也称为抽象类
//抽象类特点
//无法实例化对象
//子类必须重写抽象类中的纯虚函数，否则也属于抽象类
#include<iostream>
using namespace std;

class Base56
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特点：
	//1、无法实例化对象
	//2、子类必须重写抽象类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
};

class Son56 :public Base56
{
public:
	void func()
	{
		cout << "func函数的调用" << endl;
	}
};

void test5601()
{
	//Base56 b;            //抽象类无法实例化对象
	//new Base56;        //抽象类无法实例化对象
	Son56 s;      //子类必须重写抽象类中的纯虚函数，否则也属于抽象类
	Base56* base = new Son56;      //实例化的是Son
	base->func();
}

int main56()
{
	test5601();

	system("pause");
	return 0;
}
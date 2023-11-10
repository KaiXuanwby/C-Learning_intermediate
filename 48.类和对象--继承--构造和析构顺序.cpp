//子类继承父类后，当创建子类对象，也会调用父类的构造函数
//问题：父类和子类的构造和析构顺序是谁先谁后?
#include<iostream>
using namespace std;

class Base48
{
public:
	Base48()
	{
		cout << "Base构造函数的调用" << endl;
	}

	~Base48()
	{
		cout << "Base析构函数的调用" << endl;
	}
};

class Son48:public Base48
{
public:
	Son48()
	{
		cout << "Son的构造函数的调用" << endl;
	}

	~Son48()
	{
		cout << "Son的析构函数的调用" << endl;
	}
};

void test4801()
{
	//Base48 b;
	//todo  继承中的构造和析构的顺序如下：  
	//todo 先构造父类，在构造子类，析构的顺序与构造的顺序相反
	//todo  以栈的方式存储，先进后出
	//todo  父类第一个进，子类第二个进，子类第一个出，父类第二个出
	Son48 s;
}

int main48()
{
	test4801();
	system("pause");
	return 0;
}
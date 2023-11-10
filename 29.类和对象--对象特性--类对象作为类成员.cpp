//C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
/*
	class  A  {  }
	class  B
	{
		A  a;
	}
*/
//B 类中有对象 A 作为成员， A 为对象成员
//那么当创建B对象时，A与B的构造和析构的顺序是谁先谁后？
#include<iostream>
using namespace std;

class Phone29
{
public:

	Phone29(string pName)
	{
		cout << "Phone29构造函数的调用" << endl;
		per_PName = pName;
	}
	~Phone29()
	{
		cout << "Phone29析构函数的调用" << endl;
	}

	string per_PName;
};

class Person29
{
public:
	//   Phone29 per_phone = pName ;创建对象时的隐式转换法创建--相当于把pName传到 Phone29类的有参构造函数 Phone29 (   ) 里面去
	Person29(string name, string pName) :  per_name(name),per_phone(pName)  
	{
		cout << "Person29的构造函数调用" << endl;
	}

	~Person29()
	{
		cout << "Person29析构函数的调用" << endl;
	}

	string per_name;
	Phone29 per_phone;
};
//todo  当其他类对象作为本类成员，构造时先构造其他类对象，再构造自身
//todo 析构的顺序与构造的顺序是相反的，换句话说，是对称的。

void test2901()
{
	Person29 p1("张三", "IPHONE");
	cout << p1.per_name << "拿着" << p1.per_phone.per_PName << "手机" << endl;

}

int main29()
{
	test2901();
	system("pause");
	return 0;
}
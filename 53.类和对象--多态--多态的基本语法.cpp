//多态是面向对象的三大特性之一
//多态分为两类
//静态多态：函数重载 和 运算符重载属于静态多态，复用函数名
//动态多态：派生类和虚函数运行时实现动态多态
//静态多态和动态多态的区别
//静态多态的函数地址早绑定-----编译阶段确定函数地址
//动态函数的函数地址晚绑定-----运行阶段确定函数地址
#include<iostream>
using namespace std;

class Animal5301
{
public:
	//虚函数
	virtual void Speak()
	{
		cout << "Animal is speaking" << endl;
	}
		
};

class Cat5301:public Animal5301
{
public:
	//todo 重写的概念：函数返回值类型   函数名  参数列表  完全相同
	void Speak()    //子类进行重写的时候virtual关键字可写可不写
	{
		cout << "Cat is speaking" << endl;
	}
};

class Dong5301 :public Animal5301 
{
public:
	void Speak()
	{
		cout << "Dog is speaking" << endl;
	}
};

//执行说话的函数
//地址早绑定    在编译阶段就确定了函数的地址
//如果想执行让cat类speak   那么这个函数的地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//只需要让Animal  类中的 Speak()  函数变为虚函数即可-------函数声明前面加virtual

//todo 动态多态的满足条件：
//todo 1、有继承关系
//todo 2、子类重写父类的虚函数

//动态多态的使用
//todo 父类的指针或者引用  指向子类对象的时候就发生了多态
void doSpeak(Animal5301 &animal) //Animal &animal = cat;
{
	animal.Speak();
}

void test5301()
{
	Cat5301 cat;
	doSpeak(cat);   //todo C++中允许父类和子类之间的类型转换，父类的引用或者指针可以直接指向子类对象
	cout << endl;
	Dong5301 dog;
	doSpeak(dog);
}

int main53()
{
	test5301();
	system("pause");
	return 0;
}
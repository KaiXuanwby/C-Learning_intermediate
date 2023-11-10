//常函数
//成员函数后加const以后，我们称这个函数为常函数
//常函数不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中依然可以修改

//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数
//复习：静态函数只能调用静态变量，静态函数和静态变量只能在全局区
#include<iostream>
using namespace std;

class Person35
{
public:

	//thia指针的本质是   指针常量  指针的指向是不可以修改的，(哪个在前面哪个就不可以改)
	//const Person* cosnt this()
	//todo 在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const  //这里加的const就相当于上面那行的第一个const
	{
		this->per_B = 100;
		//this->per_A = 100;
		//this =NULL;   //this指针不可以修改指针的指向的
	}
	void func()
	{

	}

	int per_A;
	mutable int per_B;//todo 特殊变量，即使在常函数中，也可以修改这个值，加mutable
};

void test3501()
{
	Person35 p;
	p.showPerson();
}

void test3502()
{
	const Person35 p2;  //在对象前加cosnt，变为常对象
	//p2.per_A = 100;
	p2.per_B = 100;  //per_B是特殊值，在常对象下也可以修改

	//todo  常对象只能调用常函数。因为常函数本身保证了属性不可以修改
	p2.showPerson();
	//p2.func()                 //常对象  不可以调用普通成员函数，因为普通成员函数可以修改属性;
}

int main35()
{
	test3501();
	system("pause");
	return 0;
}
//菱形继承
//两个派生类继承同一个基类
//又有某个类同时继承着两个派生类
//这种继承称为菱形继承，或者钻石继承
//菱形继承产生的问题
//todo  两个派生类都继承了基类的数据，同时继承着两个派生类的那个类使用数据时会产生二义性
//todo  同时继承着两个派生类的那个类对于原始的基类的数据继承了两份，但我们只需要一份
#include<iostream>
using namespace std;

class Animal52
{
public:
	int m_Age;
};

//todo  利用虚继承可以解决菱形继承的问题--------------在继承之前加上关键字变为虚继承virtual
//todo 虚继承后，Animal类称为虚基类
class Sheep52:virtual public Animal52
{

};

class Tuo52 :virtual public Animal52
{

};

class SheepTuo52 :public Sheep52, public Tuo52
{

};

void test5201()
{
	SheepTuo52 st;
	st.Sheep52::m_Age = 18;
	st.Tuo52::m_Age = 28;

	cout << "st.Sheep52::m_Age = " << st.Sheep52::m_Age << endl;
	cout << "st.Tuo52::m_Age = " << st.Tuo52::m_Age << endl;
	cout << st.m_Age << endl;
}
//todo  虚继承之后m_Age就只有一份了，可以打开开发人员命令提示工具使用
//todo  会发现继承自两个派生类的不再是m_Age，而是 vbptr-------虚基类指针    virtual base pointer
//todo  虚基类指针vbptr会指向vbtable------虚基类表格-----可以得出偏移量-----可以找到指向的位置
//todo  实际上就是说由原来的两块内存空间，变成了两个指向同一块内存空间的指针，这块空间会表示那个被两次使用了的量
int main52()
{
	test5201();
	system("pause");
	return 0;
}
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//todo 解决方式：将父类中的析构函数改为  虚析构  或者  纯虚析构
//todo虚析构和纯虚析构共性：
//1、可以解决父类指针释放子类对象
//2、都需要有具体的函数的实现
//todo虚析构和纯虚析构区别：
//1、如果是纯虚析构，该类属于抽象类，无法实例化对象
//虚析构语法：virtual ~类名（）{ }
//纯虚析构语法   virtual ~类名（）= 0；
//                         类名:: ~纯虚析构函数名（） {  }
#include<iostream>
using namespace std;

class Animal58
{
public:
	Animal58()
	{
		cout << "Animal构造函数的调用" << endl;
	}
	//纯虚函数
	virtual void Speak() = 0;

	//利用虚析构可以解决  父类指针释放子类对象时不干净的问题
	/*virtual ~Animal58()
	{
		cout << "Animal虚析构函数的调用" << endl;
	}*/

	//纯虚析构--需要声明，也需要实现
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal58() = 0;
};

Animal58::~Animal58()
{
	cout << "Animal纯虚析构函数的调用" << endl;
}

class Cat58 :public Animal58
{
public:
	Cat58(string name)
	{
		cout << "Cat的构造函数调用" << endl;
		m_Name = new string(name);
	}
	void Speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	
	~Cat58()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
	
};

void test5801()
{
	Animal58* animal = new Cat58("Tom");
	animal->Speak();
	//父类的指针在析构的时候，不会调用子类中析构函数，导致子类如果有堆区的属性，出现内存泄露
	//将父类的析构代码改为虚析构
	delete animal;
}

int main58()
{
	test5801();
	system("pause");
	return 0;
}

//总结：
//1、虚析构或者纯虚析构就是用来解决通过父类指针释放子类对象
//2、如果子类中没有堆区数据，可以不写为虚析构函数或者纯虚析构函数
//3、拥有纯虚析构函数的类也属于抽象类吧
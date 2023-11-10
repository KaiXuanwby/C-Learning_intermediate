//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//多态的优点：
//代码组织结构清晰
//可读性强
//利于前期和后期的扩展以及维护
#include<iostream>
using namespace std;

//普通编写-------不利于开发，维护以及扩展
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//todo  如果想扩展新的功能，需求修改源码 
		//todo  在开发中  提倡  开闭原则
		//todo  开闭原则：对扩展进行开放，对修改进行关闭
		/*else if (oper == "/")
		{
			return m_Num1 / m_Num2;
		}
		else
		{
			cout << "抱歉！您的输入不合法" << endl;
		}*/
	}

	int m_Num1;
	int m_Num2;
};

void test5501()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
	//cout << c.m_Num1 << " / " << c.m_Num2 << " = " << c.getResult("/") << endl;
}


//利用多态实现计算器
//实现计算器抽象类
class AbstractCalculator55
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};
//加法计算器类
class AddCalculator55 :public AbstractCalculator55
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法计算器类
class SubCalculator55 :public AbstractCalculator55
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法计算器类
class MulCalculator55 :public AbstractCalculator55
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test5502()
{
	//多态的使用：父类的指针或者引用指向子类对象
	//加法运算
	AbstractCalculator55* abc = new AddCalculator55;  //创建一个加法的计算器类对象，用父类的指针指向它
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;

	//new 创建在了堆区，用完后记得销毁
	delete abc;    //只释放了堆区的数据，指针的类型没有变

	//减法运算
	abc = new SubCalculator55;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;

	//乘法的运算
	abc = new MulCalculator55;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;

	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}
int main55()
{
	test5502();
	//test5501();
	system("pause");
	return 0;
}
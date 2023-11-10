//重载关系运算符可以让两个自定义类型的对象进行对比操作
#include<iostream>
using namespace std;

class Person43
{
public:
	Person43(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	
	bool operator==(Person43& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)   //this默认的不写系统加，也就是说m_Age == p.m_Age和this->m_Age == p.m_Age完全等价
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(Person43& p)
	{
		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test4301()
{
	Person43 p1("欣雨" ,20);
	Person43 p3("欣雨", 20);
	Person43 p2("凯旋", 18);

	if (p1 == p2)
	{
		cout << "p1和p2相等" << endl;
	}

	if (p1 == p3)
	{
		cout << "p1和p3相等" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1和p2不相等" << endl;
	}
}

int main43()
{
	test4301();
	system("pause");
	return 0;
}
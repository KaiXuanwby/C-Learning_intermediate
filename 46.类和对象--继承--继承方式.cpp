//继承方式
//继承的语法：class  子类 ：继承方式  父类
//公共继承
//保护继承
//私有继承
#include<iostream>
using namespace std;

//继承方式
class Base4601
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//公共继承
class Son4601:public Base4601
{
public:
	void func01()
	{
		m_A = 10;//父类中的公共权限成员  到子类中依然是公共权限
		m_B = 10;//父类中的保护权限成员  到子类中依然是保护权限
		//m_C = 10;//父类中的私有权限成员  到子类中访问不到
	}
};

//保护继承
class Son4602:protected Base4601
{
public:
	void func02()
	{
		m_A = 100;//父类中的公共权限成员  到子类中是保护权限
		m_B = 100;//父类中的保护权限成员  到子类中依然是保护权限
		//m_C = 100;//父类中的私有权限成员  到子类中访问不到
	}
};

//私有继承
class Son4603:private Base4601
{
public:
	void func03()
	{
		m_A = 100;//父类中的公共权限成员  到子类中是私有权限
		m_B = 100;//父类中的保护权限成员  到子类中是私有权限
		//m_C = 100;//父类中的私有权限成员  到子类中访问不到
	}
};
int main46()
{


	system("pause");
	return 0;
}
//访问权限：类在设计时，可以把属性和行为放在不同的权限下，加以控制
//访问权限有三种：
//public		公共权限   类内可以访问  类外可以访问
//protected	保护权限   类内可以访问  类外不可以访问  子类可以访问父类的保护内容
//private		私有权限   类内可以访问  类外不可以访问  子类不可以访问父类的私有内容
#include<iostream>
using namespace std;

class Person1 
{
	//公共权限
public:
	string m_Name;

	//保护权限
protected:
	string m_Car;

	//私有权限
private:
	string m_Password;

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "Farrir";
		m_Password = "123456";
		cout << m_Name <<"\n" << m_Car <<"\n" << m_Password << endl;
	}
};

int main18()
{
	//实例化具体对象
	Person1 p1;

	p1.m_Name = "李四";
	//p1.m_Car = "奔驰"; //保护权限的内容在类外访问不到
	//p1.m_Password = "1123";//私有权限的内容在类外访问不到
	p1.func();
	system("pause");
	return 0;
}
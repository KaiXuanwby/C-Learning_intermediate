//默认情况下，C++编译器至少给一个类添加三个函数
//默认构造函数（无参，函数体为空）
//默认析构函数（无参，函数体为空）
//默认拷贝构造函数，对属性值进行拷贝
//构造函数调用规则如下
//如果用户定义有参构造函数，C++不再默认提供无参构造，但是会提供默认拷贝构造函数
//如果用户定义的是拷贝构造函数，C++不会再提供其他构造函数
#include<iostream>
using namespace std;

class Person26
{
public:
	Person26()
	{
		cout << "Person26的默认构造函数调用" << endl;
	}
	Person26(int a)
	{
		cout << "Person26的有参构造函数的调用" << endl;
		per_age = a;
	}
	Person26(const Person26 &p)
	{
		cout << "Person26的拷贝构造函数的调用" << endl;
		per_age = p.per_age;
	}
	~Person26()
	{
		cout << "Person26的析构函数调用" << endl;
	}

	int per_age;

};

void test2601()
{
	Person26 p;  //默认构造函数调用
	p.per_age = 18;   //拷贝构造函数的调用

	Person26 p2(p);  //如果不特殊在类中进行声明拷贝构造函数调用，C++会默认调用拷贝构造函数传值
	cout << "p2的年龄为：" << p2.per_age << endl;
}

void test2602()
{
	Person26 p2(23);
	Person26 p3(p2);
	cout << "p2的年龄为：" << p2.per_age << endl;
}

int main26()
{
	test2601();
	test2602();
	system("pause");
	return 0;
}
/*
总结：
构造函数有三种：默认构造（无参构造函数）-----> 有参构造函数 -----> 拷贝构造函数
分别从低级到高级
编写代码时，写了高级的构造函数，低级的就会被屏蔽，不会默认生成，比该构造函数更高级的会默认提供

如果只写默认构造-----> 默认构造调用		有参构造不调用		拷贝构造C++调用
如果只写有参构造-----> 默认构造不调用		有参构造调用			拷贝构造C++调用
如果只写拷贝构造-----> 默认构造不调用		有参构造不调用		拷贝构造调用
*/
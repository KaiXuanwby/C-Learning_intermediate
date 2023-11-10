//空指针访问成员函数：C++中的空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性
#include<iostream>
using namespace std;

//空指针调用成员函数
class Person34
{
public:

	void showClassName()
	{
		cout << "this is Person class" << endl;
	}
	void showPersonAge()
	{
		//报错的原因是因为传入的指针是为NULL
		if (this == NULL)    //提高代码的健壮性
		{
			return;
		}
		cout << "age = " << this->per_age << endl;
	}

	int per_age;
};

void test3401()
{
	Person34* p = NULL;  //空指针可以调用成员函数，但该成员不能访问成员变量
	p->showClassName();  //因为p是空指针，所以对应的this也是空的，无法访问成员属性
	p->showPersonAge();
}

int main34()
{
	test3401();

	system("pause");
	return 0;
}
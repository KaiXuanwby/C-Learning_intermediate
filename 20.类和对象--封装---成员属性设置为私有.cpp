//将所有成员属性设置为私有，可以自己控制读写权限
//对于写权限，我们可以检测数据的有效性
#include<iostream>
using namespace std;

//成员属性私有化
class Person
{
public:
	void setName(string name)  //写
	{
		per_Name = name;
	}
	string getName()  //读
	{
		return per_Name;
	}
	//获取年龄  可读可写  如果想修改（年龄的范围必须是 0~ 150 之间）
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "输入有误" << endl;
			per_Age = 0;
			return;
		}
		per_Age = age;
	}
	
	int getAge()  //只读
	{
		
		return per_Age;
	}
	void setLover(string lover)
	{
		per_Lover = lover;
	}
private:
	string per_Name;  //姓名  可读可写
	int per_Age;      //年龄  只读
	string per_Lover; //情人  只写 


};

int main20()
{
	Person p;
	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;
	p.setAge(1000);
	cout << "年龄为：" << p.getAge() << endl;
	p.setLover("kaixuan");


	system("pause");
	return 0;
}
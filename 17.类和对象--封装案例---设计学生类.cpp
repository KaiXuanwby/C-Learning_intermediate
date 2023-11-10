//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
#include<iostream>
using namespace std;

//学生类
class Student1
{
	//访问权限
public:
	//属性
	string stu_name;
	string stu_id;
	//行为
	void Show_name_id()
	{
		cout << "学生的姓名为：" << stu_name << endl;
		cout << "学生的学号为：" << stu_id << endl;
	}
};

//改进:  通过行为（函数）来给属性进行赋值操作
class Student2
{
public:  //公共权限

	//类中的属性和行为  我们统一称为  成员
	//属性   成员属性   成员变量
	//行为   成员函数   成员方法

	string stu_name;
	string stu_id;
	void setName(string name)
	{
		stu_name = name;
	}
	void setID(string ID)
	{
		stu_id = ID;
	}
	void Show_name_id()
	{
		cout << "学生的姓名为：" << stu_name << endl;
		cout << "学生的学号为：" << stu_id << endl;
	}
};

int main17()
{
	Student1 stu1;
	stu1.stu_name = "凯旋";
	stu1.stu_id = "22101010316";
	stu1.Show_name_id();

	Student2 stu2;
	stu2.setName("JAVA");
	stu2.setID("221010102222");
	stu2.Show_name_id();

	system("pause");
	return 0;
}
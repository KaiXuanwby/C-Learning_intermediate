//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
#include<iostream>
using namespace std;

//ѧ����
class Student1
{
	//����Ȩ��
public:
	//����
	string stu_name;
	string stu_id;
	//��Ϊ
	void Show_name_id()
	{
		cout << "ѧ��������Ϊ��" << stu_name << endl;
		cout << "ѧ����ѧ��Ϊ��" << stu_id << endl;
	}
};

//�Ľ�:  ͨ����Ϊ���������������Խ��и�ֵ����
class Student2
{
public:  //����Ȩ��

	//���е����Ժ���Ϊ  ����ͳһ��Ϊ  ��Ա
	//����   ��Ա����   ��Ա����
	//��Ϊ   ��Ա����   ��Ա����

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
		cout << "ѧ��������Ϊ��" << stu_name << endl;
		cout << "ѧ����ѧ��Ϊ��" << stu_id << endl;
	}
};

int main17()
{
	Student1 stu1;
	stu1.stu_name = "����";
	stu1.stu_id = "22101010316";
	stu1.Show_name_id();

	Student2 stu2;
	stu2.setName("JAVA");
	stu2.setID("221010102222");
	stu2.Show_name_id();

	system("pause");
	return 0;
}
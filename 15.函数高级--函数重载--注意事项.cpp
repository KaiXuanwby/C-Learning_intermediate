//������Ϊ��������
//����������������Ĭ�ϲ���

#include<iostream>
using namespace std;

//������Ϊ��������
void func1501(int& a)   //int & a = 10;  ���Ϸ���
{
	cout << "fun(int& a)�ĵ���" << endl;
}

void func1501(const int& a)  //const int& a = 10;  �Ϸ�
{
	cout << "fun(const int& a)�ĵ���" << endl;
}

///����������������Ĭ�ϲ���
void fun1502(int a,int b = 10)
{
	cout << "fun1502(int a)�ĵ���" << endl;
}

void fun1502(int a)
{
	cout << "fun1502(int a)�ĵ���" << endl;
}

int main15()
{
	int a = 10;
	func1501(a);
	func1501(10);

	//fun1502(2); //����������������Ĭ�ϲ���, ���ֶ����ԣ�����
	system("pause");
	return 0;
}
//�̳�ͬ����̬��Ա����ʽ
//���⣺�̳���ͬ���ľ�̬��Ա�������������ν��з��ʣ�
//��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
//todo  ��������ͬ����Ա  ֱ�ӷ��ʼ���
//todo  ���ʸ���ͬ����Ա  ��Ҫ��������
#include<iostream>
using namespace std;

class Base50
{
public:
	static void func()
	{
		cout << "Base--static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base--static void func(int a)" << endl;
	}

	static int m_A;
};
int Base50::m_A = 100;


class Son50:public Base50
{
public:
	static void func()
	{
		cout << "Son--static void func()" << endl;
	}

	static int m_A;
};

int Son50::m_A = 200;

void test5001()
{
	Son50 s;
	//ͬ����̬��Ա
	//ͨ���������
	cout << "Son---m_A = " << s.m_A << endl;
	cout << "Base--m_A = " << s.Base50::m_A << endl;
	//ͨ����������
	cout << "Son---m_A = " << Son50::m_A << endl;
	cout << "Base--m_A = " << Base50::m_A << endl;  //ֱ�ӷ��ʸ���
	cout << "Base--m_A = " << Son50::Base50::m_A << endl;//todoͨ��������������ʸ������
	
	//ͬ����̬��Ա����
	//ͨ���������
	s.func();
	s.Base50::func();
	//ͨ����������
	Son50::func();
	Base50::func();
	Son50::Base50::func();
}

int main50()
{
	test5001();
	system("pause");
	return 0;
}
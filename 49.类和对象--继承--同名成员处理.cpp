//���⣺�������븸�����ͬ����Ա�����ͨ��������󣬷��ʵ�������߸�����ͬ�������ݣ�
//todo  ��������ͬ����Ա  ֱ�ӷ��ʼ���
//todo  ���ʸ���ͬ����Ա  ��Ҫ��������

#include<iostream>
using namespace std;

class Base49
{
public:
	Base49()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base--func()����" << endl;
	}
	void func(int a)
	{
		cout << "Base--func(int a)����" << endl;
	}

	void funk()
	{
		cout << "Base--funk()����" << endl;
	}
	int m_A;
};

class Son49:public Base49
{
public:
	Son49()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son--func()����" << endl;
	}
	int m_A;
};

void test4901()
{
	Son49 s;
	cout << "Son---m_A = " << s.m_A << endl;
	//���ͨ���������  ���ʵ������е�ͬ����Ա����Ҫ����������
	cout << "Base---m_A = " << s.Base49::m_A << endl;
}

void test4902()
{
	Son49 s;
	s.func();
	s.Base49::func();
	//todo  ��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����������е�ͬ����Ա����
	//todo  �������ʵ������б����ص�ͬ����Ա��������Ҫ��������
	s.Base49::func(10);
	s.funk();
}

int main49()
{
	test4901();
	test4902();
	system("pause");
	return 0;
}
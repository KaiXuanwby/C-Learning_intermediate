//C++����һ����̳ж����
//�﷨��class  ���� ���̳з�ʽ  ����1 �� �̳з�ʽ  ����2,�� ......
//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
//todo C++ʵ�ʿ����в������ö�̳�
#include<iostream>
using namespace std;

class Base5101
{
public:
	Base5101()
	{
		m_A = 100;
	}

	int m_A;
};

class Base5102
{
public:
	Base5102()
	{
		m_A = 200;
	}
	int m_A;

};

class Son5101:public Base5101,public Base5102
{
public:
	Son5101()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};

void test5101()
{
	Son5101 s;
	cout << "�������sռ�ݵĿռ�Ϊ��" << sizeof(s) << endl;
	//todo�������г���ͬ����Ա����Ҫ������������
	cout << "Base1---m_A = " << s.Base5101::m_A << endl;
	cout << "Base2---m_A = " << s.Base5102::m_A << endl;
}

int main51()
{
	test5101();

	system("pause");
	return 0;
}
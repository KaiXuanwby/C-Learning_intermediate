//���������ٸ�һ��������ĸ�����
//Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//Ĭ�������������޲Σ�������Ϊ�գ�
//Ĭ�Ͽ������캯����������ֵ���п���
//��ֵ����� operator = ,������ֵ���п���

//�������������ָ�����������ֵ����ʱҲ�������ǳ����������
#include<iostream>
using namespace std;

class Person42
{
public:
	Person42(int age)
	{
		m_Age = new int(age);
	}

	~Person42()               //��������Ϊ�������ڴ��ظ��ͷţ��������������������ǳ��������������
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//���ظ�ֵ�����
	Person42& operator=(Person42 &p1)
	{
		//�������ṩ����ǳ����
		//m_Age = p1.m_Age;

		//���ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		//���
		m_Age = new int(*p1.m_Age);

		//���ض�����
		return *this;
	}
	int *m_Age;
};

void test4201()
{
	Person42 p1(18);
	Person42 p2(20);
	p2 = p1;  //��ֵ������������õ�������Ĭ�ϵ��������㣬��ʵ����ǳ��������ĳЩ����£���������⣬��Ҫ�ĳ����

	cout << "p1������Ϊ��" << *p1.m_Age << endl;
	cout << "p2������Ϊ��" << *p2.m_Age << endl;
}

void test4202()
{
	Person42 p1(18);
	Person42 p2(20);
	Person42 p3(35);

	p1 = p2 = p3;       //��ʽ����--�ú���������֮����Ȼ���Է��������μ���һ�εĵ���

	cout << "p1 = " << *p1.m_Age << endl;
	cout << "p2 = " << *p2.m_Age << endl;
	cout << "p3 = " << *p3.m_Age << endl;

}
int main42()
{

	test4201();
	test4202();
	int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}

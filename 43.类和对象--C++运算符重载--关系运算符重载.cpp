//���ع�ϵ����������������Զ������͵Ķ�����жԱȲ���
#include<iostream>
using namespace std;

class Person43
{
public:
	Person43(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	
	bool operator==(Person43& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)   //thisĬ�ϵĲ�дϵͳ�ӣ�Ҳ����˵m_Age == p.m_Age��this->m_Age == p.m_Age��ȫ�ȼ�
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(Person43& p)
	{
		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test4301()
{
	Person43 p1("����" ,20);
	Person43 p3("����", 20);
	Person43 p2("����", 18);

	if (p1 == p2)
	{
		cout << "p1��p2���" << endl;
	}

	if (p1 == p3)
	{
		cout << "p1��p3���" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1��p2�����" << endl;
	}
}

int main43()
{
	test4301();
	system("pause");
	return 0;
}
//C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
/*
	class  A  {  }
	class  B
	{
		A  a;
	}
*/
//B �����ж��� A ��Ϊ��Ա�� A Ϊ�����Ա
//��ô������B����ʱ��A��B�Ĺ����������˳����˭��˭��
#include<iostream>
using namespace std;

class Phone29
{
public:

	Phone29(string pName)
	{
		cout << "Phone29���캯���ĵ���" << endl;
		per_PName = pName;
	}
	~Phone29()
	{
		cout << "Phone29���������ĵ���" << endl;
	}

	string per_PName;
};

class Person29
{
public:
	//   Phone29 per_phone = pName ;��������ʱ����ʽת��������--�൱�ڰ�pName���� Phone29����вι��캯�� Phone29 (   ) ����ȥ
	Person29(string name, string pName) :  per_name(name),per_phone(pName)  
	{
		cout << "Person29�Ĺ��캯������" << endl;
	}

	~Person29()
	{
		cout << "Person29���������ĵ���" << endl;
	}

	string per_name;
	Phone29 per_phone;
};
//todo  �������������Ϊ�����Ա������ʱ�ȹ�������������ٹ�������
//todo ������˳���빹���˳�����෴�ģ����仰˵���ǶԳƵġ�

void test2901()
{
	Person29 p1("����", "IPHONE");
	cout << p1.per_name << "����" << p1.per_phone.per_PName << "�ֻ�" << endl;

}

int main29()
{
	test2901();
	system("pause");
	return 0;
}
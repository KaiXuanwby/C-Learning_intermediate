//����̳и���󣬵������������Ҳ����ø���Ĺ��캯��
//���⣺���������Ĺ��������˳����˭��˭��?
#include<iostream>
using namespace std;

class Base48
{
public:
	Base48()
	{
		cout << "Base���캯���ĵ���" << endl;
	}

	~Base48()
	{
		cout << "Base���������ĵ���" << endl;
	}
};

class Son48:public Base48
{
public:
	Son48()
	{
		cout << "Son�Ĺ��캯���ĵ���" << endl;
	}

	~Son48()
	{
		cout << "Son�����������ĵ���" << endl;
	}
};

void test4801()
{
	//Base48 b;
	//todo  �̳��еĹ����������˳�����£�  
	//todo �ȹ��츸�࣬�ڹ������࣬������˳���빹���˳���෴
	//todo  ��ջ�ķ�ʽ�洢���Ƚ����
	//todo  �����һ����������ڶ������������һ����������ڶ�����
	Son48 s;
}

int main48()
{
	test4801();
	system("pause");
	return 0;
}
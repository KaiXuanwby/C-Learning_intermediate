//����Ȩ�ޣ��������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
//����Ȩ�������֣�
//public		����Ȩ��   ���ڿ��Է���  ������Է���
//protected	����Ȩ��   ���ڿ��Է���  ���ⲻ���Է���  ������Է��ʸ���ı�������
//private		˽��Ȩ��   ���ڿ��Է���  ���ⲻ���Է���  ���಻���Է��ʸ����˽������
#include<iostream>
using namespace std;

class Person1 
{
	//����Ȩ��
public:
	string m_Name;

	//����Ȩ��
protected:
	string m_Car;

	//˽��Ȩ��
private:
	string m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "Farrir";
		m_Password = "123456";
		cout << m_Name <<"\n" << m_Car <<"\n" << m_Password << endl;
	}
};

int main18()
{
	//ʵ�����������
	Person1 p1;

	p1.m_Name = "����";
	//p1.m_Car = "����"; //����Ȩ�޵�������������ʲ���
	//p1.m_Password = "1123";//˽��Ȩ�޵�������������ʲ���
	p1.func();
	system("pause");
	return 0;
}
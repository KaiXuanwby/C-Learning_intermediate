//�̳�������������������֮һ
//��ĳЩ���ʱ�������������������¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ�������
//���ʱ�����ǾͿ��Կ������ü̳еļ����������ظ�����
//todo�̳е��﷨��class  ���� ���̳з�ʽ  ����
//����  Ҳ��Ϊ  ������
//����  Ҳ��Ϊ  ����
#include<iostream>
using namespace std;

class Java4501
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python....(���������б�)" << endl;
	}
	void content()
	{
		cout << "Java��Ƶ�����ݣ�" << endl;
	}
};

class Python4501
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python....(���������б�)" << endl;
	}
	void content()
	{
		cout << "Python��Ƶ�����ݣ�" << endl;
	}
};

class CPP4501
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python....(���������б�)" << endl;
	}
	void content()
	{
		cout << "C++��Ƶ�����ݣ�" << endl;
	}

};

//�̳�ʵ��
//todo  �̳еĺô��������ظ�����
class Basepage45
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "Java��Python....(���������б�)" << endl;
	}
};

class Java4502:public Basepage45
{
public:

	void content()
	{
		cout << "Java��Ƶ�����ݣ�" << endl;
	}
};

class Python4502 :public Basepage45
{
public:
	void content()
	{
		cout << "Python��Ƶ�����ݣ�" << endl;
	}
};

class CPP4502 :public Basepage45
{
public:
	void content()
	{
		cout << "C++��Ƶ�����ݣ�" << endl;
	}
};

void test4501()
{
	cout << "XXXXXXXXXXXXXX" << endl;
	Java4502 ja;
	ja.header();
	ja.content();
	ja.footer();
	ja.left();
	cout << "----------------------------" << endl;
	Python4502 py;
	py.content();
	py.footer();
	py.header();
	py.left();
	cout << "----------------------------" << endl;
	CPP4502 cpp;
	cpp.content();
	cpp.footer();
	cpp.header();
	cpp.left();
}

int main45()
{
	test4501();

	system("pause");
	return 0;
}
//    ��̬��Ա����
//		���ж�����ͬһ������
//		��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
#include<iostream>
using namespace std;

class Person31
{
public:
	//��̬��Ա����
	static void func()
	{
		per_A = 100;  //��̬�ĳ�Ա�������Է��ʾ�̬�ĳ�Ա����
		//per_B = 90;         //��̬��Ա����  �����Է���  �Ǿ�̬��Ա������ �޷����ֵ������ĸ�����ĳ�Ա����
		cout << "static void func()�ĵ���" << endl;
	}

	static int per_A;
	int per_B;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2()�ĵ���" << endl;
	}
};

int Person31::per_A;

void test3101()
{
	//1��ͨ��������з���
	Person31 p;
	p.func();

	//2��ͨ���������з���
	Person31::func();

	//��̬��Ա�����ķ���Ȩ��
	Person31 p2;
	//p2.func2();
	//Person31::func2()           ������ʲ���˽�еľ�̬��Ա����
}

int main31()
{

	test3101();
	system("pause");
	return 0;
}
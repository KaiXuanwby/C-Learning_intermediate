//�����������������Ҳ��������
//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º���û�й̶�д�����ǳ����
#include<iostream>
using namespace std;

class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void test4401()
{
	MyPrint myprint;

	myprint("hello world");  //����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
}
//�º����ǳ���û�й̶���д��
//�ӷ���

class Myadd
{
public:

	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test4402()
{
	Myadd myadd;
	cout << "\t" << myadd(20, 30) << endl;
	
	//������������
	cout << Myadd()(100, 100) << endl;  //Myadd()  ������������������������һ�д�����ִ��������������̱��ͷ�
}     //��������   ��  �� + ����

int main44()
{
	test4401();
	test4402();
	system("pause");
	return 0;
}
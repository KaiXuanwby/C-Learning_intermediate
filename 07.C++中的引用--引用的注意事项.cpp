//���ñ����ʼ��
//�����ڳ�ʼ���󲻿ɸı�
#include<iostream>
using namespace std;

int main07()
{
	int a = 10;
	int b = 20;
	//int &c;  //�������ñ����ʼ��
	int& c = a;  //һ����ʼ����Ͳ����Ը���
	cout << "a = " << a << endl;
	cout << "c = " << c << endl;
	c = b;   // ��ֵ�����������Ǹ�������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}
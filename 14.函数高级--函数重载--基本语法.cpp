//���ã�������������ͬ����߸�����
//����������������
//todo ͬһ����������
//todo ����������ͬ
//todo ��������  ���Ͳ�ͬ  ����  ������ͬ  ����  ˳��ͬ
//ע�⣺�����ķ���ֵ��������Ϊ�������ص�����
#include<iostream>
using namespace std;

//��������
//ͬһ��������----ȫ��������
void func14()
{
	cout << "func�ĵ���" << endl;
}

void func14(int a)// �������� ������ͬ
{
	cout << "\tfunc(int a)�ĵ���!" << endl;
}

void func14(double a)// �������� ���Ͳ�ͬ
{
	cout << "\tfunc(double a)�ĵ���!" << endl;
}

void func14(int a,double b)// �������� ˳��ͬ
{
	cout << "\tfunc(int a,double b)�ĵ���!" << endl;
}

void func14(double a, int b)// �������� ˳��ͬ
{
	cout << "\tfunc(double a, int b)�ĵ���!" << endl;
}
int main14()
{
	func14();
	func14(10);
	func14(3.141);
	func14(10, 3.14);
	func14(3.14, 10);
	system("pause");
	return 0;
}
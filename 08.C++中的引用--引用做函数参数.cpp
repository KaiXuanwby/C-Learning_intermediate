//�������ݲ���ʱ�������������õļ������β�����ʵ��
//���Լ�ָ���޸�ʵ��
//���ô��ݺ͵�ַ���ݵ�Ч����ͬ�����õ��﷨�������
#include<iostream>
using namespace std;

//ֵ����
void mySwap0801(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//��ַ����
void mySwap0802(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void mySwap0803(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main08()
{
	int a = 10;
	int b = 20;

	mySwap0801(a, b);    // ֵ���ݣ��ββ�������ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	mySwap0802(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	mySwap0803(a, b);  //���ô��ݣ��βλ�����ʵ�Σ��������Ժ�ԭ����ͬ
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
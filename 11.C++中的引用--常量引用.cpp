//����������Ҫ���������βΣ���ֹ�����
//�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��
#include<iostream>
using namespace std;

//ֵ���ݻ´�����ݣ�ռ���ڴ�
//��ӡ���ݺ���
void showValue11( const int& val)
{
	//����β�λ���ϼ���const ֵ�Ͳ������޸�
	//val = 1000;
	cout << "val = " << val << endl;
}

int main11()
{
	int a = 10;
	int& ref1 = a;  
	//int& ref =10;   //���ñ�������һ��Ϸ����ڴ�ռ�
	//����const֮�󣬱������������޸�   int temp = 10;   int& ref = temp;
	const int& ref2 = 10;
	//ref2 = 10;   //����const֮���Ϊֻ�����������޸�

	a = 100;
	showValue11(a);
	cout << "a = " << a << endl;

	system("pasue");
	return 0;
}
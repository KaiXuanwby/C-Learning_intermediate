/*
	�������к�
	������
		�ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
		��C++�У���new�ڶ��������ڴ�
*/
#include<iostream>
using namespace std;

//�ڶ�����������
int* func04()
{
	//����new�ؼ��ֽ����ݿ��ٵ�����
	//ָ��*p����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10); //���ص�ֱ�Ӿ��ǵ�ַ
	return p;
}
int main04()
{
	int* p = func04();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;//������������ָ��ĵ�ַ��Ҳ����03�е������ͬ
	cout << *p << endl;

	system("pause");
	return 0;
}
//���ã������������
//�﷨�� ��������   &���� = ԭ��    �������ͱ����ԭ����ͬ
#include<iostream>
using namespace std;

int main06()
{
	int a = 10;
	int& b = a;
	cout << "a = " << a << endl;
	cout << "a = " << b << endl;
	cout << "a�ĵ�ַΪ��" << (long long)&a << endl;
	cout << "b�ĵ�ַΪ��" << (long long)&b << endl; //����û�д����µĿռ�
	int* p = &a;
	cout << "p�ĵ�ַΪ��" << (long long)&p << endl;//ָ�봴�����¿ռ�

	b = 100;
	cout << "a = " << a << endl;
	cout << "a = " << b << endl;
	system("pause");
	return 0;
}
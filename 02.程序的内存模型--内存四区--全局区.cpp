/*
ȫ������
	ȫ�ֱ����;�̬�����Լ���������ڴ�
	������������ڳ���������ɲ���ϵͳ�ͷ�
*/
#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//const���εı���---->�������ⲿ--->ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;

int main02()
{
	//�ֲ�����
	int a = 10;
	int b = 10;
	//��ӡ�ֲ������ĵ�ַ
	cout << "�ֲ�����a�ĵ�ַΪ��" << (long long)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (long long)&b << endl;

	//��ӡȫ�ֱ����ĵ�ַ
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (long long)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (long long)&g_b << endl;

	//��̬����
	static int s_a = 10;
	static int s_b = 10;
	//��ӡ��̬�����ĵ�ַ
	cout << "��̬����s_a�ĵ�ַΪ��" << (long long)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (long long)&s_b << endl;

	//�������ַ���������const���εı���
	//��ӡ�ַ��������ĵ�ַ
	cout << "�ַ��������ĵ�ַΪ��" << (long long)&"hello world1" << endl;
	cout << "�ַ��������ĵ�ַΪ��" << (long long)&"hello world2" << endl;

	//const���εı���---->�������ڲ�--->�ֲ�����
	const int c_l_a = 10;
	const int c_l_b = 10;
	//��ӡ�ֲ������ĵ�ַ
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (long long)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (long long)&c_l_b << endl;

	//��ӡȫ�ֳ����ĵ�ַ
	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (long long)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ��" << (long long)&c_g_b << endl;

	system("pause");
	return 0;
}
/*
	ͨ���۲첻ͬ�ĵ�ַ�����洢������Ĳ�ͬ
	�ܽ᣺
		C++�ڳ�������ǰ��Ϊȫ�����ʹ�����
		�������ص�Ϊ�����ֻ��
		ȫ�����д��ȫ�ֱ�������̬����������
		�����д��const���ε�ȫ�ֳ��� �� �ַ�������
		�ֲ������;ֲ����������ջ��
*/
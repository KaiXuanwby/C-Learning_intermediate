//��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
//todo ֻ�зǾ�̬��Ա��������Ķ�����------------ֻ�зǾ�̬��Ա�������ڴ�����ʵ������
#include<iostream>
using namespace std;

class Person32
{
public:
	int per_A;  //�Ǿ�̬�ĳ�Ա����
	static int per_B;  //��̬��Ա��������������Ķ�����

	void func() {}  //�Ǿ�̬��Ա���� �� ��������Ķ�����
	static void func2() {}   //��̬��Ա��������������Ķ�����
};

int Person32::per_B;

//���ڿն���Ľ���
void test3201()
{
	Person32 p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ��  1���ֽ�
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//todoÿ���ն���ҲӦ����һ����һ�޶��ĵ�ַ
	cout << "pռ�õ��ڴ�ռ䣺" << sizeof(p) << endl;
}

void test3202()
{
	Person32 p;
	cout << "pռ�õ��ڴ�ռ䣺" << sizeof(p) << endl;
}

int main32()
{
	//test3201();
	test3202();

	system("pause");
	return 0;
}
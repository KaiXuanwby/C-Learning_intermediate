//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
//��̬��Ա�ֲ���
//    ��̬��Ա����
//		���ж�����ͬһ������
//		�ڱ���׶η����ڴ�
//		���������������ʼ��
//    ��̬��Ա����
//		���ж�����ͬһ������
//		��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
#include<iostream>
using namespace std;

class Person30
{
public:

	static int per_A;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int per_B;
};

int Person30::per_A = 100;   // todo ����Ҫ�������ʼ��������Ҳ���Ǳ���Ҫ������дһ�£�����Ȼ�ᱨ�����Բ�����ʼֵ��Ĭ��ֵΪ0
int Person30::per_B = 200;

void test3001()
{
	Person30 p1;
	cout << p1.per_A << endl;

	Person30 p2;
	p2.per_A = 200;
	cout << p1.per_A << endl;  //todo per_A�����ж���������ݣ�ֻҪ�ı�ȫ���ı�
}

void test3002()
{
	//��̬��Ա����  ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ  ( ��publicȨ���� )

	//1��ͨ��������з���
	Person30 p;
	cout << "p = " << p.per_A << endl;

	//2��ͨ���������з���
	cout << Person30::per_A << endl;
	//cout << Person30::per_B << endl;          ������ʲ���˽�еľ�̬��Ա����
}


int main30()
{
	//test3001();
	test3002();
	system("pause");
	return 0;
}
//  ���ã�C++�ṩ�˳�ʼ���б��﷨��������ʼ������
//  �﷨�� ���캯�� ( ) : ����1 ( ֵ1 )  , ����2 ( ֵ2 ) ........ {  } 
//��ͨ�ĳ�ʼ�����������������ϵĳ�ʼ�����ڹ����ʱ���ȳ�ʼ�����ٽ��и�ֵ����ʼ���б�����������ĳ�ʼ����Ч�ʻ�ߺܶ�
#include<iostream>
using namespace std;

class Person28
{
public:

	//��ͳ��ʼ������
	/*Person28(int a, int b, int c)
	{
		per_A = a;
		per_B = b;
		per_C = c;
	}*/

	//��ʼ���б��ʼ������
	Person28(int a, int b,int c) :per_A(a), per_B(b), per_C(c)
	{

	}
	//todo��ͳ��ʼ����ֵ�൱�ڣ��������࣬������ֵ������
	//todo ��ʼ���б��൱�ڣ�ֱ������һ���г�ʼֵ�����ͣ���ʡ���˸�ֵ�������ڴ�����Ŀ�У�class���г�Ա�������������£���ʼ���б��Ч�ʸ��ߡ�

	int per_A;
	int per_B;
	int per_C;
};

void test2801()
{
	//Person28 p1(10, 20, 30);
	
	Person28 p1(30,20,10);
	cout << "per_A��" << p1.per_A << endl;
	cout << "per_B��" << p1.per_B << endl;
	cout << "per_C��" << p1.per_C << endl;
}


int main28()
{
	test2801();
	system("pause");
	return 0;
}
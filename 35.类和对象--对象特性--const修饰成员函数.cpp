//������
//��Ա�������const�Ժ����ǳ��������Ϊ������
//�������������޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����
//��ϰ����̬����ֻ�ܵ��þ�̬��������̬�����;�̬����ֻ����ȫ����
#include<iostream>
using namespace std;

class Person35
{
public:

	//thiaָ��ı�����   ָ�볣��  ָ���ָ���ǲ������޸ĵģ�(�ĸ���ǰ���ĸ��Ͳ����Ը�)
	//const Person* cosnt this()
	//todo �ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
	void showPerson() const  //����ӵ�const���൱���������еĵ�һ��const
	{
		this->per_B = 100;
		//this->per_A = 100;
		//this =NULL;   //thisָ�벻�����޸�ָ���ָ���
	}
	void func()
	{

	}

	int per_A;
	mutable int per_B;//todo �����������ʹ�ڳ������У�Ҳ�����޸����ֵ����mutable
};

void test3501()
{
	Person35 p;
	p.showPerson();
}

void test3502()
{
	const Person35 p2;  //�ڶ���ǰ��cosnt����Ϊ������
	//p2.per_A = 100;
	p2.per_B = 100;  //per_B������ֵ���ڳ�������Ҳ�����޸�

	//todo  ������ֻ�ܵ��ó���������Ϊ����������֤�����Բ������޸�
	p2.showPerson();
	//p2.func()                 //������  �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����;
}

int main35()
{
	test3501();
	system("pause");
	return 0;
}
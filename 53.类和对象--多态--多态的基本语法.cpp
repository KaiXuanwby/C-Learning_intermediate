//��̬������������������֮һ
//��̬��Ϊ����
//��̬��̬���������� �� ������������ھ�̬��̬�����ú�����
//��̬��̬����������麯������ʱʵ�ֶ�̬��̬
//��̬��̬�Ͷ�̬��̬������
//��̬��̬�ĺ�����ַ���-----����׶�ȷ��������ַ
//��̬�����ĺ�����ַ���-----���н׶�ȷ��������ַ
#include<iostream>
using namespace std;

class Animal5301
{
public:
	//�麯��
	virtual void Speak()
	{
		cout << "Animal is speaking" << endl;
	}
		
};

class Cat5301:public Animal5301
{
public:
	//todo ��д�ĸ����������ֵ����   ������  �����б�  ��ȫ��ͬ
	void Speak()    //���������д��ʱ��virtual�ؼ��ֿ�д�ɲ�д
	{
		cout << "Cat is speaking" << endl;
	}
};

class Dong5301 :public Animal5301 
{
public:
	void Speak()
	{
		cout << "Dog is speaking" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ���    �ڱ���׶ξ�ȷ���˺����ĵ�ַ
//�����ִ����cat��speak   ��ô��������ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//ֻ��Ҫ��Animal  ���е� Speak()  ������Ϊ�麯������-------��������ǰ���virtual

//todo ��̬��̬������������
//todo 1���м̳й�ϵ
//todo 2��������д������麯��

//��̬��̬��ʹ��
//todo �����ָ���������  ָ����������ʱ��ͷ����˶�̬
void doSpeak(Animal5301 &animal) //Animal &animal = cat;
{
	animal.Speak();
}

void test5301()
{
	Cat5301 cat;
	doSpeak(cat);   //todo C++�������������֮�������ת������������û���ָ�����ֱ��ָ���������
	cout << endl;
	Dong5301 dog;
	doSpeak(dog);
}

int main53()
{
	test5301();
	system("pause");
	return 0;
}
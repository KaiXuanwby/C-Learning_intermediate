#include<iostream>
using namespace std;

class Animal5401
{
public:
	//�麯��
	virtual void Speak()
	{
		cout << "Animal is speaking" << endl;
	}
};

class Cat5401 :public Animal5401
{                                 //��ΪCat�̳���Animal����Cat��Ҳ��vfptr---->vftable  (  �洢 �� &Animal::Speak()  )  
public:
	void Speak()            //�����෢����д����д�˸�����麯����
	{						//todo�����е��麯�����е�����  ���滻��  ������麯����ַ
		cout << "Cat is speaking" << endl;     //todo  Ҳ����˵ &Animal::Speak()  ���滻Ϊ   &Cat::Speak()
	}										   //todo  ע�⣺�����е�vftableû�иı䡣����&Animal::Speak()
	
	
};

class Dong5401 :public Animal5401
{
public:
	void Speak()
	{
		cout << "Dog is speaking" << endl;
	}
};

//todo �����ָ���������  ָ����������ʱ��ͷ����˶�̬   Animal &animal = cat;
void doSpeak(Animal5401 &animal)
{
	animal.Speak();  //���ڷ����˶�̬��animal����ָ���һ��cat �Ķ������Ի�ȥCat���麯����vftable�л�ȡ����
}

void test5401()
{
	Cat5401 cat;
	doSpeak(cat);
	cout << endl;
	Dong5401 dog;
	doSpeak(dog);
}

void test5402()
{
	cout << "sizeof Animal = " << sizeof(Animal5401) << endl;
	//��ϰ��ֻ�зǾ�̬��Ա�����洢���࣬��̬�����ͳ�Ա���Ǿ�̬���������洢���ֻ࣬��һ������
	//todo ����  virtual  �Ժ��Ϊ8��32λ��������Ϊ4��˵�����ж���һ��ָ��
	//todoָ������Ϊvfptr----�麯��(��)ָ��  virtual function pointer  ָ��vftable  �麯����
	//����ڲ���¼�麯���ĵ�ַ   &Animal::Speak()
}

int main54()
{
	test5402();
	test5401();
	system("pause");
	return 0;
}
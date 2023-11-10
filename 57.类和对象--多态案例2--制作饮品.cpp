//����������
//������Ʒ�Ĵ�������Ϊ����ˮ--����--���뱭��--���븨��
//���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
#include<iostream>
using namespace std;

class AbstractDrink
{
public:
	//����׼��
	virtual void PrepareForDrink() = 0;
	//��ˮ
	virtual void BoilWater() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void AddSomething() = 0;
	//������Ʒ
	virtual void MakeDrink()
	{
		PrepareForDrink();
		BoilWater();
		Brew();
		PourInCup();
		AddSomething();
	}
};

class MakeCoffee:public AbstractDrink
{
public:

	//����׼��
	virtual void PrepareForDrink()
	{
		cout << "����׼����������" << endl;
	}
	//��ˮ
	virtual void BoilWater()
	{
		cout << "������ˮ����ȴ�" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ڳ��ݿ��ȣ���ȴ�" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���ݺõĿ������ڵ��뱭��" << endl;
	}
	//���븨��
	virtual void AddSomething()
	{
		cout << "���ڼ��븨��---�ǣ�ţ��" << endl;
	}
};


//������Ҷ
class MakeTea :public AbstractDrink
{
public:

	//����׼��
	virtual void PrepareForDrink()
	{
		cout << "����׼��������" << endl;
	}
	//��ˮ
	virtual void BoilWater()
	{
		cout << "������ˮ����ȴ�" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ڳ��ݲ�Ҷ����ȴ�" << endl;
	}
	//���뱭��
	virtual void PourInCup()
	{
		cout << "���ݺõ��������ڵ��뱭��" << endl;
	}
	//���븨��
	virtual void AddSomething()
	{
		cout << "���ڼ��븨��---�𻨣����" << endl;
	}
};

//��������
void DoWork(AbstractDrink* abs)      //AbstractDrink* abs = new MakeCoffee  ��̬��ʹ��
{
	abs->MakeDrink();
	delete abs;
}

void test5701()
{
	//��������
	DoWork(new MakeCoffee);
	DoWork(new MakeTea);
}


int main57()
{
	test5701();
	system("pause");
	return 0;
}
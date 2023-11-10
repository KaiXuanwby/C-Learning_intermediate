//����������
//������Ҫ��ɲ���Ϊ  CPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
//��ÿ�������װ�������ಢ���ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ��й���
#include<iostream>
using namespace std;

//������---CPU
class CPU
{
public:
	//���ڼ���Ĵ��麯��
	virtual void Calculate() = 0;
};
//������--�Կ�
class ShowCard
{
public:
	//������ʾ�Ĵ��麯��
	virtual void ShowSomething() = 0;
};
//������--�ڴ���
class Disk
{
public:
	//���ڴ洢�Ĵ��麯��
	virtual void SaveInformation() = 0;
};


class Computer
{
public:
	Computer(CPU* cpu, ShowCard* show, Disk* disk)
	{
		m_cpu = cpu;
		m_disk = disk;
		m_show = show;
		 
	}
	//��������
	void DoWork()
	{
		//���ýӿ�
		m_cpu->Calculate();
		m_disk->SaveInformation();
		m_show->ShowSomething();
	}
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ����
		if (m_show != NULL)
		{
			delete m_show;
			m_show = NULL;
		}
		//�ͷ��ڴ����
		if (m_disk != NULL)
		{
			delete m_disk;
			m_disk = NULL;
		}
	}
private:
	CPU* m_cpu;
	ShowCard* m_show;
	Disk* m_disk;
};

class Intel_CPU:public CPU
{
public:
	void Calculate()
	{
		cout << "intel��CPU���ڼ���" << endl;
	}
};
class Intel_Disk :public Disk
{
public:
	void SaveInformation()
	{
		cout << "intel��Ӳ�����ڴ洢��Ϣ" << endl;
	}
};
class Intel_ShowCard :public ShowCard
{
public:
	void ShowSomething()
	{
		cout << "Intel���Կ�������ʾ��Ϣ" << endl;
	}
};

class Lenovo_CPU :public CPU
{
public:
	void Calculate()
	{
		cout << "Lenovo��CPU���ڼ���" << endl;
	}
};
class Lenovo_Disk :public Disk
{
public:
	void SaveInformation()
	{
		cout << "Lenovo��Ӳ�����ڴ洢��Ϣ" << endl;
	}
};
class Lenovo_ShowCard :public ShowCard
{
public:
	void ShowSomething()
	{
		cout << "Lenovo���Կ�������ʾ��Ϣ" << endl;
	}
};
void MIX()
{
	//��һ̨���Ե����
	CPU* intelCPU = new Intel_CPU;
	ShowCard* intelShowCard = new Intel_ShowCard;
	Disk* intelDisk = new Intel_Disk;
	//������һ̨����
	Computer *computer1= new Computer(intelCPU, intelShowCard, intelDisk);
	computer1->DoWork();
	delete computer1;

	cout << "-------------------" << "\n" << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new Lenovo_CPU, new Lenovo_ShowCard, new Lenovo_Disk);
	computer2->DoWork();
	delete computer2;

	cout << "-------------------" << "\n" << endl;
	cout << "����̨���Կ�ʼ����" << endl;
	//�����ڶ�̨����
	Computer* computer3 = new Computer(new Lenovo_CPU, new Intel_ShowCard, new Lenovo_Disk);
	computer3->DoWork();
	delete computer3;
}


int main59()
{
	MIX();
	system("pause");
	return 0;
}
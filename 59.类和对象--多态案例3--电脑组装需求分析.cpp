//案例描述：
//电脑主要组成部件为  CPU（用于计算），显卡（用于显示），内存条（用于存储）
//将每个零件封装出抽象类并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作
#include<iostream>
using namespace std;

//抽象类---CPU
class CPU
{
public:
	//用于计算的纯虚函数
	virtual void Calculate() = 0;
};
//抽象类--显卡
class ShowCard
{
public:
	//用于显示的纯虚函数
	virtual void ShowSomething() = 0;
};
//抽象类--内存条
class Disk
{
public:
	//用于存储的纯虚函数
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
	//工作函数
	void DoWork()
	{
		//调用接口
		m_cpu->Calculate();
		m_disk->SaveInformation();
		m_show->ShowSomething();
	}
	~Computer()
	{
		//释放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//释放显卡零件
		if (m_show != NULL)
		{
			delete m_show;
			m_show = NULL;
		}
		//释放内存零件
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
		cout << "intel的CPU正在计算" << endl;
	}
};
class Intel_Disk :public Disk
{
public:
	void SaveInformation()
	{
		cout << "intel的硬盘正在存储信息" << endl;
	}
};
class Intel_ShowCard :public ShowCard
{
public:
	void ShowSomething()
	{
		cout << "Intel的显卡正在显示信息" << endl;
	}
};

class Lenovo_CPU :public CPU
{
public:
	void Calculate()
	{
		cout << "Lenovo的CPU正在计算" << endl;
	}
};
class Lenovo_Disk :public Disk
{
public:
	void SaveInformation()
	{
		cout << "Lenovo的硬盘正在存储信息" << endl;
	}
};
class Lenovo_ShowCard :public ShowCard
{
public:
	void ShowSomething()
	{
		cout << "Lenovo的显卡正在显示信息" << endl;
	}
};
void MIX()
{
	//第一台电脑的零件
	CPU* intelCPU = new Intel_CPU;
	ShowCard* intelShowCard = new Intel_ShowCard;
	Disk* intelDisk = new Intel_Disk;
	//创建第一台电脑
	Computer *computer1= new Computer(intelCPU, intelShowCard, intelDisk);
	computer1->DoWork();
	delete computer1;

	cout << "-------------------" << "\n" << endl;
	cout << "第二台电脑开始工作" << endl;
	//创建第二台电脑
	Computer* computer2 = new Computer(new Lenovo_CPU, new Lenovo_ShowCard, new Lenovo_Disk);
	computer2->DoWork();
	delete computer2;

	cout << "-------------------" << "\n" << endl;
	cout << "第三台电脑开始工作" << endl;
	//创建第二台电脑
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
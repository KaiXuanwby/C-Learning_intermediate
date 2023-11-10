//案例描述：
//制作饮品的大致流程为：煮水--冲泡--倒入杯中--加入辅料
//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
#include<iostream>
using namespace std;

class AbstractDrink
{
public:
	//制作准备
	virtual void PrepareForDrink() = 0;
	//煮水
	virtual void BoilWater() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void AddSomething() = 0;
	//制作饮品
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

	//制作准备
	virtual void PrepareForDrink()
	{
		cout << "正在准备制作咖啡" << endl;
	}
	//煮水
	virtual void BoilWater()
	{
		cout << "正在煮水，请等待" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "正在冲泡咖啡，请等待" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "冲泡好的咖啡正在倒入杯中" << endl;
	}
	//加入辅料
	virtual void AddSomething()
	{
		cout << "正在加入辅料---糖，牛奶" << endl;
	}
};


//制作茶叶
class MakeTea :public AbstractDrink
{
public:

	//制作准备
	virtual void PrepareForDrink()
	{
		cout << "正在准备制作茶" << endl;
	}
	//煮水
	virtual void BoilWater()
	{
		cout << "正在煮水，请等待" << endl;
	}
	//冲泡
	virtual void Brew()
	{
		cout << "正在冲泡茶叶，请等待" << endl;
	}
	//倒入杯中
	virtual void PourInCup()
	{
		cout << "冲泡好的清茶茶正在倒入杯中" << endl;
	}
	//加入辅料
	virtual void AddSomething()
	{
		cout << "正在加入辅料---桂花，枸杞" << endl;
	}
};

//制作函数
void DoWork(AbstractDrink* abs)      //AbstractDrink* abs = new MakeCoffee  多态的使用
{
	abs->MakeDrink();
	delete abs;
}

void test5701()
{
	//制作咖啡
	DoWork(new MakeCoffee);
	DoWork(new MakeTea);
}


int main57()
{
	test5701();
	system("pause");
	return 0;
}
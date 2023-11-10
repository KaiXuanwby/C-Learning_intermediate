//友元
//生活中你家有客厅（public）有你的卧室（private）
//客厅所有客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去
//但是，你也可以允许你的好闺蜜好基友进去
//在程序里，有些私有属性，也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
//todo友元的目的就是让一个函数或者类  访问另一个类中的私有成员
//todo友元的关键字为friend
#include<iostream>
using namespace std;

//建筑物
class Building36
{

	friend void GoodFriend(Building36* building);   //todo    声明友元
public:
	Building36()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom;    //客厅

private:
	string m_BedRoom;    //卧室

};

//全局函数
void GoodFriend(Building36* building)
{
	cout << "全局函数正在访问：" << building->m_SittingRoom << endl;
	cout << "全局函数正在访问：" << building->m_BedRoom << endl;;
}

void test3601()
{
	Building36 bu;
	GoodFriend(&bu);
}

int main36()
{
	test3601();

	system("pause");
	return 0;
}
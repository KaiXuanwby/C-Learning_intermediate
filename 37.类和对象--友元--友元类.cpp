#include<iostream>
using namespace std;

//类做友元
class Building37;
class GoodFriend37
{
public:
	GoodFriend37();
	void visit();  //参观函数  访问building中的属性

	Building37* building;

};

class Building37
{
	friend class GoodFriend37;
public:
	Building37();


	string m_SittingRoom;
private:
	string m_BedRoom;


};

//类外写成员函数
Building37::Building37()  //限定作用域为Building37
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodFriend37::GoodFriend37()
{
	//创建建筑物对象
	building = new Building37;  //用new来创建building的话，灵活度更高，开发者随时用完这个变量，随时就可以将这块内存释放

}
void GoodFriend37::visit()
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;

	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}

void test3701()
{
	GoodFriend37 g;
	g.visit();
}

int main37()
{
	test3701();

	system("pause");
	return 0;
}
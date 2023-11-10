#include<iostream>
using namespace std;

class Building38;
class GoodFriend38
{
public:
	GoodFriend38();

	void visit3801();
	void visit3802();

	Building38* building;

};

class Building38
{
	friend void GoodFriend38::visit3801();
public:
	Building38();

	string m_SittingRoom;
private:
	string m_BedRoom;
	
};

GoodFriend38::GoodFriend38()
{
	building = new Building38;
}

Building38::Building38()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

void GoodFriend38::visit3801()
{
	cout << "visit01正在访问：" << building->m_SittingRoom << endl;

	cout << "visit01正在访问：" << building->m_BedRoom << endl;
}


void GoodFriend38::visit3802()
{
	cout << "visit02正在访问：" << building->m_SittingRoom << endl;

	//cout << "visit02正在访问：" << building->m_BedRoom << endl;   不可以访问私有成员
}

void test3801()
{
	GoodFriend38 g;
	g.visit3801();
}


int main38()
{
	test3801();
	system("pause");
	return 0;
}

//在这段C++代码中，类的声明和定义是有顺序要求的，因为在类之间存在依赖关系。
// todo  在 C++ 中，如果一个类在另一个类的定义中使用，那么被使用的类必须在使用它的类之前进行声明
// 。以下是正确的类声明、定义和构造函数定义的顺序：
//
//todo1. 首先，应该声明 `Building38` 类，因为 `GoodFriend38` 类中使用了 `Building38* building; ` 成员。
//
//```cpp
//class Building38
//{
//	friend void GoodFriend38::visit3801();
//public:
//	Building38();
//
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//```
//
//todo2. 接着，声明并定义 `GoodFriend38` 类，因为该类中使用了 `Building38* building; ` 成员，并在成员函数中使用了 `Building38` 类的成员。
//
//```cpp
//class GoodFriend38
//{
//public:
//	GoodFriend38();
//
//	void visit3801();
//	void visit3802();
//
//	Building38* building;
//};
//```
//
//todo3. 然后，定义 `Building38` 类的构造函数。
//
//```cpp
//Building38::Building38()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//```
//
//todo4. 接着，定义 `GoodFriend38` 类的构造函数。
//
//```cpp
//GoodFriend38::GoodFriend38()
//{
//	building = new Building38;
//}
//```
//
//todo5. 最后，定义 `GoodFriend38` 类的成员函数。
//
//```cpp
//void GoodFriend38::visit3801()
//{
//	cout << "visit01正在访问：" << building->m_SittingRoom << endl;
//	cout << "visit01正在访问：" << building->m_BedRoom << endl;
//}
//
//void GoodFriend38::visit3802()
//{
//	cout << "visit02正在访问：" << building->m_SittingRoom << endl;
//}
//```
//
//todo6. 在最后，定义测试函数和 `main` 函数。
//
//```cpp
//void test3801()
//{
//	GoodFriend38 g;
//	g.visit3801();
//}
//
//int main()
//{
//	test3801();
//	system("pause");
//	return 0;
//}
//```
//
//以上顺序满足了类之间的依赖关系，确保了代码的正确编译和执行。
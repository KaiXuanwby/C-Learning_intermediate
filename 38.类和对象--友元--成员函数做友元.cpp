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
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

void GoodFriend38::visit3801()
{
	cout << "visit01���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "visit01���ڷ��ʣ�" << building->m_BedRoom << endl;
}


void GoodFriend38::visit3802()
{
	cout << "visit02���ڷ��ʣ�" << building->m_SittingRoom << endl;

	//cout << "visit02���ڷ��ʣ�" << building->m_BedRoom << endl;   �����Է���˽�г�Ա
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

//�����C++�����У���������Ͷ�������˳��Ҫ��ģ���Ϊ����֮�����������ϵ��
// todo  �� C++ �У����һ��������һ����Ķ�����ʹ�ã���ô��ʹ�õ��������ʹ��������֮ǰ��������
// ����������ȷ��������������͹��캯�������˳��
//
//todo1. ���ȣ�Ӧ������ `Building38` �࣬��Ϊ `GoodFriend38` ����ʹ���� `Building38* building; ` ��Ա��
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
//todo2. ���ţ����������� `GoodFriend38` �࣬��Ϊ������ʹ���� `Building38* building; ` ��Ա�����ڳ�Ա������ʹ���� `Building38` ��ĳ�Ա��
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
//todo3. Ȼ�󣬶��� `Building38` ��Ĺ��캯����
//
//```cpp
//Building38::Building38()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//```
//
//todo4. ���ţ����� `GoodFriend38` ��Ĺ��캯����
//
//```cpp
//GoodFriend38::GoodFriend38()
//{
//	building = new Building38;
//}
//```
//
//todo5. ��󣬶��� `GoodFriend38` ��ĳ�Ա������
//
//```cpp
//void GoodFriend38::visit3801()
//{
//	cout << "visit01���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "visit01���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void GoodFriend38::visit3802()
//{
//	cout << "visit02���ڷ��ʣ�" << building->m_SittingRoom << endl;
//}
//```
//
//todo6. ����󣬶�����Ժ����� `main` ������
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
//����˳����������֮���������ϵ��ȷ���˴������ȷ�����ִ�С�
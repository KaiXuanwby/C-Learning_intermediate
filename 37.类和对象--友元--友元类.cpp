#include<iostream>
using namespace std;

//������Ԫ
class Building37;
class GoodFriend37
{
public:
	GoodFriend37();
	void visit();  //�ιۺ���  ����building�е�����

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

//����д��Ա����
Building37::Building37()  //�޶�������ΪBuilding37
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodFriend37::GoodFriend37()
{
	//�������������
	building = new Building37;  //��new������building�Ļ������ȸ��ߣ���������ʱ���������������ʱ�Ϳ��Խ�����ڴ��ͷ�

}
void GoodFriend37::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
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
//��Ԫ
//����������п�����public����������ң�private��
//�������п��˶����Խ�ȥ���������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ
//���ǣ���Ҳ����������ĺù��ۺû��ѽ�ȥ
//�ڳ������Щ˽�����ԣ�Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
//todo��Ԫ��Ŀ�ľ�����һ������������  ������һ�����е�˽�г�Ա
//todo��Ԫ�Ĺؼ���Ϊfriend
#include<iostream>
using namespace std;

//������
class Building36
{

	friend void GoodFriend(Building36* building);   //todo    ������Ԫ
public:
	Building36()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}


public:
	string m_SittingRoom;    //����

private:
	string m_BedRoom;    //����

};

//ȫ�ֺ���
void GoodFriend(Building36* building)
{
	cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;;
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
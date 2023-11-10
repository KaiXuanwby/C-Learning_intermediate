//����������ࣨCube��
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
#include<iostream>
using namespace std;

class Cube
{
public:
	//д��
	void setLength(int length)
	{
		cube_L = length ;
	}
	void setWidth(int width)
	{
		cube_W = width ;
	}
	void setHight(int hight)
	{
		cube_H = hight;
	}
	int getLength()
	{
		return cube_L;
	}
	int getWidth()
	{
		return cube_W;
	}
	int getHight()
	{
		return cube_H;
	}
	int Volume() //���
	{
		return cube_L * cube_H * cube_W;
	}
	int Area()
	{
		int UD = 0, Side1 = 0, Side2 = 0;
		UD = 2 * cube_L * cube_W;
		Side1 = 2 * cube_L * cube_H;
		Side2 = 2 * cube_H * cube_W;
		return  UD + Side1 + Side2;
	}
	bool isSameByClass(Cube c2)
	{
		if (cube_H == c2.getHight() && cube_L == c2.getLength() && cube_W == c2.getWidth())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	int cube_L;
	int cube_H;
	int cube_W;
};

//�ж������������Ƿ����
void Compare(Cube c1, Cube c2)
{
	if (c1.getHight() == c2.getHight() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
	{
		cout << "����������������ͬ��" << endl;
	}
	else
	{
		cout << "�����������岻��ͬ" << endl;
	}
}

int main21()
{
	Cube c1;
	c1.setHight(3);
	c1.setLength(4);
	c1.setWidth(5);
	cout << c1.getHight() << "\t" << c1.getLength() <<"\t" << c1.getWidth() << endl;
	cout << "������������Ϊ��" << c1.Volume() << endl;
	cout << "������������Ϊ��" << c1.Area() << endl;

	Cube c2;
	c2.setHight(1);
	c2.setLength(2);
	c2.setWidth(3);
	cout << c2.getHight() << "\t" << c2.getLength() << "\t" << c2.getWidth() << endl;
	cout << "������������Ϊ��" << c2.Volume() << endl;
	cout << "������������Ϊ��" << c2.Area() << endl;


	bool ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "����������������ͬ��" << endl;
	}
	else
	{
		cout << "�����������岻��ͬ" << endl;
	}
	Compare(c1, c2);
	system("pause");
	return 0;
}
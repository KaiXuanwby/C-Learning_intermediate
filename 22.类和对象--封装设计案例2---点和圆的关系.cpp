//���һ��Բ���ࣨCircle��, ��һ�����ࣨPoint�����������Բ�Ĺ�ϵ
#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;


//����
/*
class Point
{
public:
	void setX(int x)
	{
		cir_X = x;
	}
	int getX()
	{
		return cir_X;
	}
	void setY(int y)
	{
		cir_Y = y;
	}
	int getY()
	{
		return cir_Y;
	}

private:
	int cir_X;
	int cir_Y;
};*/

//Բ����
/*
class Circle
{
public:
	void setR(int r)
	{
		cir_R = r;
	}
	int getR()
	{
		return cir_R;
	}
	void setCenter(Point center)
	{
		cir_Center = center;
	}
	Point getCenter()
	{
		return cir_Center;
	}
private:
	int cir_R;//�뾶
	int cir_X;
	int cir_Y;
	Point cir_Center;  //Բ��    //�����п�������һ�����ʵ��������Ϊ�����еĳ�Ա
}; 
*/


//�жϵ��Բ�Ĺ�ϵ
void isInCenter(Circle &c,Point &p)
{
	//������������ƽ��
	
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if(distance < rDistance)
	{
		cout << "����Բ��" << endl;
	}
}	
int main22()
{
	//����Բ��
	Point center;
	center.setX(10);
	center.setY(0);
	//����Բ
	Circle C;
	C.setR(10);
	C.setCenter(center);

	//������
	Point P1;
	P1.setX(10);
	P1.setY(10);
	Point P2;
	P2.setX(10);
	P2.setY(9);
	Point P3;
	P3.setX(10);
	P3.setY(11);
	//�жϹ�ϵ
	isInCenter(C, P1);
	isInCenter(C, P2);
	isInCenter(C, P3);

	system("pause");
	return 0;
}
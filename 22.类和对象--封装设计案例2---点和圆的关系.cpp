//设计一个圆形类（Circle）, 和一个点类（Point），计算点与圆的关系
#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;


//点类
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

//圆形类
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
	int cir_R;//半径
	int cir_X;
	int cir_Y;
	Point cir_Center;  //圆心    //在类中可以让另一个类的实例对象作为该类中的成员
}; 
*/


//判断点和圆的关系
void isInCenter(Circle &c,Point &p)
{
	//计算两点距离的平方
	
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();
	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else if(distance < rDistance)
	{
		cout << "点在圆内" << endl;
	}
}	
int main22()
{
	//创建圆心
	Point center;
	center.setX(10);
	center.setY(0);
	//创建圆
	Circle C;
	C.setR(10);
	C.setCenter(center);

	//创建点
	Point P1;
	P1.setX(10);
	P1.setY(10);
	Point P2;
	P2.setX(10);
	P2.setY(9);
	Point P3;
	P3.setX(10);
	P3.setY(11);
	//判断关系
	isInCenter(C, P1);
	isInCenter(C, P2);
	isInCenter(C, P3);

	system("pause");
	return 0;
}
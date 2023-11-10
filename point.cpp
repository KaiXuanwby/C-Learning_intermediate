#include"point.h"

//只需要留住函数所有的实现
void Point::setX(int x)  //写在外面属于全局函数，但是他们应该处于成员函数的位置
{                        // todo Point::表示作用域,表示是Point 下的成员函数
	cir_X = x;
}
int Point::getX()
{
	return cir_X;
}
void Point::setY(int y)
{
	cir_Y = y;
}
int Point::getY()
{
	return cir_Y;
}
//shift+tab整体缩进

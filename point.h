#pragma once   //防止头文件重复包含
#include<iostream>
using namespace std;

//点类
class Point
{
public:
	void setX(int x);   //一般而言在设计类时，只需要成员函数的声明和成员变量的声明
	
	int getX();
	
	void setY(int y);
	
	int getY();
	

private:
	int cir_X;
	int cir_Y;
};

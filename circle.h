#pragma once
#include<iostream>
#include"point.h"
using namespace std;

//Ô²ĞÎÀà
class Circle
{
public:
	void setR(int r);
	
	int getR();
	
	void setCenter(Point center);
	
	Point getCenter();
	
private:
	int cir_R;//°ë¾¶
	/*int cir_X;
	int cir_Y;*/
	Point cir_Center;  //Ô²ĞÄ
};


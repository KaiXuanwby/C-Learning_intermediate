#pragma once
#include<iostream>
#include"point.h"
using namespace std;

//Բ����
class Circle
{
public:
	void setR(int r);
	
	int getR();
	
	void setCenter(Point center);
	
	Point getCenter();
	
private:
	int cir_R;//�뾶
	/*int cir_X;
	int cir_Y;*/
	Point cir_Center;  //Բ��
};


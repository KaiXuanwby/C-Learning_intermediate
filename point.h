#pragma once   //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//����
class Point
{
public:
	void setX(int x);   //һ������������ʱ��ֻ��Ҫ��Ա�����������ͳ�Ա����������
	
	int getX();
	
	void setY(int y);
	
	int getY();
	

private:
	int cir_X;
	int cir_Y;
};

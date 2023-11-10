#include"circle.h"
#include"point.h"


void Circle::setR(int r)
{
	cir_R = r;
}
int Circle::getR()
{
	return cir_R;
}
void Circle::setCenter(Point center)
{
	cir_Center = center;
}
Point Circle::getCenter()
{
	return cir_Center;
}


#include "OurCLass.h"

int OurClass::getX()
{
	return x_;
}

int OurClass::getX() const
{
	return x_;
}

int OurClass::getY() const
{
	return y_;
}

int OurClass::getY()
{
	return y_;
}


void OurClass::setX(int& x)
{
	x_=x;
}

void OurClass::setY(int& y)
{
	y_=y;
}


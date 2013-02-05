#ifndef OUR_CLASS_H_INCLUDED
#define OUR_CLASS_H_INCLUDED

#include <iostream>
using std::cout;
using std::endl;
class OurClass{
public:
	~OurClass()
	{
		cout << "I'm melting...." << endl;
	}
	OurClass()
	{
		int x=0;
		int y=0;	
		setX(x);
		setY(y);
	}

	OurClass(int x, int y)
	{
		setX(x);
		setY(y);
	}

	int getX() const;
	int getY() const;
	int getX();
	int getY();
	void setX(int& x);
	void setY( int& y);	
private:
	int x_;
	int y_;
};


#endif

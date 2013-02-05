#include "OurCLass.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	const OurClass z(55,22);
	int x=22;
	int y=44;
	cout << z.getY() << " " << z.getX() << endl;
//	z.setY(x);
//d	z.setX(y);

	
	cout << z.getY() << " " << z.getX() << endl;
{
	OurClass w(23,41);
	
	cout << w.getY() << " " << w.getX() << endl;
}
	cout << "something else" << endl;
	return 0;
}

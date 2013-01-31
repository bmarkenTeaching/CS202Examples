#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
#include <sstream>
using std::ostringstream;

int main()
{
	string x;
	
	x="I am the very model of a modern major general";
	cout << x << endl;	

	x+="something about an englishman";
	cout << x << endl;
	cout << x.find("major")<<endl;;
	cout << x.size()<< endl;
	return 0;
}

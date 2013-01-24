#include <fstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::fstream;
using std::getline;
using std::ios;

void printBits(ifstream & input)
{
	cout << "bad bit =" << input.bad() << endl;
	cout << "fail bit =" << input.fail() << endl;
	cout << "eof bit =" << input.eof() << endl;
	cout << "good bit =" << input.good() << endl;
	
}

int main()
{

	fstream theStream("out2.txt", ios::out | ios::binary );
	theStream << "abcdefghi" << endl;

	theStream.close();
	theStream.open("out.txt", ios::in);
	string temp;
	
	theStream >> temp;
	cout << temp;
	return 0;
}


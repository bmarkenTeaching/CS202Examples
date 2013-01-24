#include <fstream>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::getline;

int main()
{
	ofstream out("/Users/brandon/out.txt");
	out << "ABCDEFGHIJK" << endl;
	out.close();

	ifstream input;
	input.open("/Users/brandon/out.txt");
	string temp;
	getline(input,temp);
	input.close();
	cout << temp;
	return 0;
}


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
	ofstream out("out.txt");
	out << "ABCDEFGHIJK" << endl;
	out.close();

	ifstream input;
	input.open("out.txt");
	string temp;
	
	while(input){
		getline(input,temp);
	
	cout << temp;
	}
	input.close();
	return 0;
}


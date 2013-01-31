#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using std::string;
using std::ofstream;
using std::ifstream;
using std::cout;
using std::setw;
using std::endl;


int main()
{
	ofstream output("nums.txt");
	
	for(int i=0; i<1000; ++i)
	{
		output<<setw(sizeof(int)) << i ;
	}
	
	output.close();
	
	ifstream input("nums.txt");
	input.seekg(100*(sizeof(int)));
	string data;
	//because we need to get 5 characters
	data=input.get();
	data+=input.get();
	data+=input.get();
	data+=input.get();
	data+=input.get();
	cout << data;
		
	return 0;
}

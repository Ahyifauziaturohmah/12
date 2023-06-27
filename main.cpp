#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main()
{
	ofstream os("D:\\data.txt", ios::app);
		string input;
	
	while (true)
	{
		cout <<" input : ";
		getline(cin, input);
		
		if(input == "")
		{
			break;
		}
		os << input << endl;
	
	}
	
	
	os.close();
	return 0;
}

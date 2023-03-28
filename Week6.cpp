// 283.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>

struct F1Car
{
	public :
	char name[32];
	int year;
	int wins;
	double engine_capacity;


};

struct F1Team
{
public:
	char name[32];
	F1Car cars[2];

	void Team(const char* teamname)
	{
		std::ofstream o_file(teamname, std::ios::binary);
		if (!o_file.is_open()) {
			std::cout << "ne bachka\n";
		}
		o_file.write((char*)&name, sizeof(F1Team));
		o_file.write((char*)&cars, sizeof(F1Team));
		o_file.close();


	}
};

int main()
{
	
}



// ConsoleApplication14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<fstream>

class Employee
{
public:
	Employee();
	Employee(int value);
Employee(Employee &other);
~Employee() { delete[] name; }
friend std::ostream& operator<<(std::ostream& os, const Employee& obj)
{

	os << obj.name << " \n" << obj.salary;
	return os;
}
private:
	char* name;
	size_t salary;

};



class TeamLeader :public Employee
{
public:
	TeamLeader();
	friend std::ostream& operator<<(std::ostream& os, const TeamLeader& obj)
	{


		return os;
	}
	~TeamLeader() { delete[] projectname; }
	
private:
	
	char* teamname;
	char* projectname;
};
class Manager :public TeamLeader
{
public:
	friend std::ostream& operator<<(std::ostream& os, const Manager& obj)
	{

		return os;
	}
private:

};


int main()
{
   
}

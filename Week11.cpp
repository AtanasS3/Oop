#include <iostream>
#include <string>

class CarPart
{
private:
	std::string name;
	std::string brand;
	unsigned int year;
	int serial;
	static int count;
public:
	CarPart(std::string name, std::string brand, unsigned int year, int serial,static int count);
	virtual void display() const
	{
		std::cout << name << " " << brand << " " << year << " " << serial<<" "<<count;
	}
protected:
	void DisplayBase() const;
};

class Tire :public CarPart
{
private:
	double width;
	unsigned int profile;
	unsigned int diameter;

public:
	Tire(double width, unsigned int profile, unsigned int diameter,std::string name,std::string brand, unsigned int year, int serial, static int count);
	void display() const override
	{
		std::cout << width << profile << diameter;
	};
};

class Piston :public CarPart
{
private:
	unsigned int hp;
public:
};


int main()
{

};
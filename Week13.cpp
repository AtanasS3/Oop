#include <iostream>
#include <string>

class Vehicle
{
protected:
	int hp{ 0 };
	int weight{ 0 };
private:
	
public:
	int getHP()
	{
		return hp;
	};
	int getweight()
	{
		return weight;
	};

	virtual void startEngine()
	{
		std::cout << "Vrooom";
	};
};

class Property
{
protected:
	std::string owner{ 0 };
	bool tangible{0};
private:

public:
	
	std::string getOwner()
	{
		return owner;
	};
	bool getTangible()
	{
		return tangible;
	}
};

class Car:public Vehicle, public Property
{
private:
	const char* brand;
public:
	Car(int hp, int weight, const std::string& owner, bool tangible, char* brand);
	Car(Car& other);
	Car(Car&& other);
	Car operator=(Car);
		~Car()
	{
		delete[] brand;
	};
		void startEngine() override
		{
			std::string moreo{ 0 };
			for (size_t i = 0; i<hp/30; i++)
			{
				moreo = moreo + "o";
			};
			std::cout << "Vrooo" << moreo << "m";
		};
};
class ElectricCar:public Car
{
public:
	void startEngine() override
	{
		std::cout << "No Sound";
	};
};

int main()
{
}
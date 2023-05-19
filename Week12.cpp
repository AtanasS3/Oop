#include <iostream>
#include <string>

class Animal
{
private:
	char* name;
	int weight;
	int age;
public:
	Animal(char* name, int weight, int age); 
	Animal(Animal& other);
	Animal(Animal&& other);
	int eat();
	void getFood() const;

	virtual ~Animal();

};


class Mamal:public Animal
{
private:
	char* adoption;

public:
	Mamal(char* adoption, char* name, int weight, int age);
	~Mamal();
};

class Bird :public Animal
{
private:
	std::string city;
public:
	Bird(std::string city, char* name,int weight,int age);
};
class ZooSector
{
private:
	int x, y;
public:
};
class Zoo :public ZooSector
{
private:
	std::string name;
	int kgOfPlants;
	int kgOfMeat;
public:
};

int main()
{

};
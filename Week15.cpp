#include <iostream>
#include <string>
#include <ostream>

class Device
{
private:
	std::string brand;
	std::string model;
	double price;
public:
	Device(std::string brand, std::string model, double price);
	Device(const Device& other);
	Device(Device&& other);
	Device& operator=(const Device&);
	~Device();

	void setPrice(double p)
	{
		price = p;
	}
	double getPrice()
	{
		return price;
	};

	friend std::ostream& operator<<(std::ostream& os, Device const& m)
	{
		os << m.brand<<" "<<m.model<<" "<<m.price;
		return os;
	};

};	

class BrokenDevice:public Device
{
private:
	std::string symptom;
	int repairTime;
public:
	 
};




int main()
{

}
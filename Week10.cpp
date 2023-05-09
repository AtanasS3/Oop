// Week10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstring>
class Spark
{
public:
private:
    int *vehicle_number = new int[100];
};
class Vehicle : public Spark
{
public:
    virtual void print_price() const = 0;
    virtual ~Vehicle() {};
private:
    int number;
    unsigned int places;
    unsigned int max_speed;
    unsigned int price;

};
class Suv :public Vehicle
{
public:
    void print_price() const override
    {
        
    }
private:
    bool allwheel;

};
class Car :public Vehicle
{
public:
private:
    std::string *brand=new std::string[];
};
class Bus :public Vehicle
{
public:
private:
     unsigned int baggage;
};



int main()
{
    
}

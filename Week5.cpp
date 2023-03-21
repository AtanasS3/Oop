// 213.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int FileSize(const char* ime)
{
    std::ifstream if_stream;
    if_stream.open(ime, std::ios::binary);
    if (!if_stream.is_open())
    {
        std::cout << "ne raboti";
    }
    if_stream.seekg(0, std::ios::end);
    int razmer = if_stream.tellg();
    if_stream.close();
    return razmer;
    
}
void CodePrint(const char* ime)
{
    std::ofstream File;
    std::ifstream Fl;
    File.open(ime);
    char kod;
    Fl.get(kod);
    std::cout << kod;
    File.close();
    Fl.close();
}


int main()
{
  
}


#include <iostream>
#include <fstream>
#include <string>
#include "countFloor.h"

int main()
{
    std::ifstream file("input.txt");
    std::string str;

    if (file.is_open())
    {
        getline(file, str);
        std::cout << countFloor(str) << std::endl;
        file.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
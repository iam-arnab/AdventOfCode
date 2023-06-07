#include <iostream>
#include <fstream>
#include <string>
#include "findPos.h"

int main()
{
    std::ifstream file("input.txt");
    std::string str;

    if (file.is_open())
    {
        getline(file, str);
        std::cout << findPos(str) << std::endl;
        file.close();
    }
    else
    {
        std::cout << "Unable to open file" << std::endl;
    }
    return 0;
}
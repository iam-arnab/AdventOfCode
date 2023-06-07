#include "countFloor.h"

int countFloor(std::string input)
{
    int count = 0;

    for (char c : input)
    {
        if (c == '(')
        {
            count++;
        }
        if (c == ')')
        {
            count--;
        }
    }

    return count;
}
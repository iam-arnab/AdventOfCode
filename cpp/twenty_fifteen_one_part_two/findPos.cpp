#include "findPos.h"

int findPos(std::string input)
{
    int count = 0;
    int pos = 0;

    for (char c : input)
    {
        if (c == '(')
        {
            count++;
            pos++;
            if (count == -1)
            {
                return pos;
            }
        }

        if (c == ')')
        {
            count--;
            pos++;
            if (count == -1)
            {
                return pos;
            }
        }
    }

    return 0;
}
#include "calculate.hpp"

using std::string, std::to_string;

#define AMOUNT_OF_DIGITS 10
#define ZERO '0'
using namespace bullpgia;
#include <cstdlib>

string bullpgia::calculateBullAndPgia(string choice, string guess) {

    string results;
    unsigned int bull = 0; // reset to zero
    unsigned int pgia = 0; // reset to zero

    unsigned int length = str.length();
    unsigned int *status = new unsigned int[length];
    std::fill(status,status+length,0);

    for (size_t k = 0; k < length; ++k) // calculate bulls
    {
        if (str[k] == guess[k])
        {
            status[k] = 2;
            continue;
        }
    }
    

    for (size_t d = 0; d < AMOUNT_OF_DIGITS; ++d) // for every digis 0...9
    {
        bool found = false;
        for (size_t i = 0; i < length && !found; ++i) // scan the guess string to see if the digit exists
        {
            if (status[i] !=2 && guess[i] == ZERO + d) // if the digit exists then check if its pgia or nothin.
            {
                for (size_t j = 0; j < length; ++j)
                {
                    if (i != j && str[j] == guess[i])
                    {
                        if (status[j] == 0)
                        {
                            status[j] = 1;
                            //std::cout<< status[0] << status[1] <<status[2] <<status[3] << std::endl;
                            //std::cout<< j << std::endl;
                            break;
                        }
                    }
                }
            }
        }
    }

    for (size_t i = 0; i < length; ++i)
    {
        bull += (status[i] == 2);
        pgia += (status[i] == 1);
    }
    
    results = to_string(bull) + "," + to_string(pgia);
    delete[] status;
    return results;
}
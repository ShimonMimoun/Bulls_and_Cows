#include "calculate.hpp"

using std::string, std::to_string,std;

#define MAX_SIZE 10
#define ZERO '0'
using namespace bullpgia;


string bullpgia::calculateBullAndPgia(string choice, string guess) {

    string results;
     int count_bull = 0; 
     int count_pgia = 0; 

   int length_choice = choice.length();
   int *arr_temp = new  int[length_choice];
    fill(arr_temp,arr_temp+length_choice,0);

    for (size_t k = 0; k < length_choice; ++k)
    {
        if (choice[k] == guess[k])
        {
            arr_temp[k] = 8;
         
        }
    }
    

    for (size_t d = 0; d < MAX_SIZE; ++d) 
    {
        for (size_t i = 0; i < length_choice ; ++i) {
            if (arr_temp[i] !=8 && guess[i] == ZERO + d) {
                for (size_t j = 0; j < length_choice; ++j)
                {
                    if (i != j && choice[j] == guess[i])
                    {
                        if (arr_temp[j] == 0){ arr_temp[j] = 5; break;}
                    }
                }
            }
        }
    }

    for (size_t i = 0; i < length_choice; ++i)
    {
        count_pgia += (arr_temp[i] == 5);
        count_bull += (arr_temp[i] == 8);  
    }
     delete[] arr_temp;

   
    return to_string(count_bull) + "," + to_string(count_pgia);
}
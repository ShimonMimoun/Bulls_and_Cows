#include "calculate.hpp"

using std::string,std::to_string;
using namespace bullpgia;
#include <cstdlib>

string bullpgia::calculateBullAndPgia(string choice, string guess) {
int countPgia = 0; 
int countBull =0;
    int size=choice.length();
         for (size_t i = 0; i < size; i++){
        for (size_t j = 0; j < size; j++)
        {
           if(choice[i] == guess[j]){
               if(i == j){
               countPgia++;
               break;
               }
               else{
                countBull++ ;        
             }
           }
        }
        
    }

string ans = to_string(countPgia)+","+to_string(countBull);

    return ans;
}
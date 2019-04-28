#include "calculate.hpp"

using std::string,std::to_string;
using namespace bullpgia;
#include <cstdlib>

string bullpgia::calculateBullAndPgia(string choice, string guess) {
int countPgia = 0; 
int countBull =0;

    int size_choice =choice.length();
    int size_guess=guess.length();
if(size_choice==size_guess){
         for (size_t i = 0; i < size_choice; i++){
        for (size_t j = 0; j < size_guess; j++)
        {
           if(choice[i] == guess[j]&& i==j){
               countPgia++;
               } else if (choice[i] == guess[j] && i!=j) {
                countBull++ ;        
           }
        }
        
    }
}else
countPgia=0;
countBull=0;

string ans = to_string(countPgia)+","+to_string(countBull);

    return ans;
}
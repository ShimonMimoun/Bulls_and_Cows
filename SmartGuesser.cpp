#include "SmartGuesser.hpp"
#include <string>
using std::string;


string bullpgia::SmartGuesser::guess() { 
    
    if ((this->countPgia != 0) && (this->countBull != 0)){
        this->value[myplace]++;
        this->myplace++;
string strr="";
        for (size_t i = 0; i < this->length; i++)
        {
        strr=strr+to_string(this->myplace)+"";
        }
        
    }
    return this->str; 
}


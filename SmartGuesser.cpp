#include "SmartGuesser.hpp"
#include <string>
using std::string;
           bullpgia::SmartGuesser::SmartGuesser(){
            this->str = "0000";
            myplace = -1;
            this->countBull = 0;
            this->countPgia = 0;

           }

string bullpgia::SmartGuesser::guess() { 
    
    helping();
    string reply = "";
    if (myplace == 10){
        for (size_t i = 0; i <= 9; i++)
        {
            if(value[i] !=0){
                if(value[i] == 1){
                reply =reply+to_string(i)+"";
                }
            }
        }
        //cout << reply << endl;

    }

    return this->str; 
}


void bullpgia::SmartGuesser::helping (){
        if (((this->countPgia != 0) || (this->countBull != 0)) && (myplace <= 9)){
        this->value[myplace]++;
        this->myplace++;
        string ans="";
        for (size_t i = 0; i < this->length; i++)
        {
        ans=ans+to_string(this->myplace)+"";
        this->str = ans;
        }
    }else{
        this->myplace++;
        string ans="";
        for (size_t i = 0; i < this->length; i++)
        {
        ans=ans+to_string(this->myplace)+"";
        this->str = ans;
        }

    }
}



void bullpgia::SmartGuesser::learn(string results)
{
    
          string delimiter = ",";
          string pgia = results.substr(0, results.find(delimiter)); 
          string bull = results.substr(results.find(delimiter)+1); 

          this->countPgia = stoi(pgia);
          this->countBull = stoi(bull);
}

void bullpgia::SmartGuesser::startNewGame(uint length) {
        this->length=length;
};


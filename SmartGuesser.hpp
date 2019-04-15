#pragma once
#include "Guesser.hpp"
#include "calculate.hpp"



/**
 * ConstantChooser is a chooser that always chooses the same string. 
 */

 namespace bullpgia {
    
class SmartGuesser: public bullpgia::Guesser{
      string str;
      int myplace;
      int value[9] = {0};

public:
          SmartGuesser(){
            this->str = "0000";
            myplace = 0;
          }
          string guess() override;

};
 }
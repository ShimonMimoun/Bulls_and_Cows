#pragma once
using std::string;
#include "Guesser.hpp"


/**
 * ConstantChooser is a chooser that always chooses the same string. 
 */

 namespace bullpgia {
    
class SmartGuesser: public bullpgia::Guesser{


public:
        string str;
          string guess() override;

};
 }
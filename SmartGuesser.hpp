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
      int value[10] = {0};
      bool pre;
      bool gassing;
public:
          SmartGuesser();
          string guess() override;
          void startNewGame(uint length) override;
          void learn(string results) override;
          void helping();

};
}
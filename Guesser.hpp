#pragma once
#include <iostream>
#include <stdlib.h>
using std::string;

namespace bullpgia {


class Guesser{

public:

  unsigned  int length;

	virtual string guess() = 0;
        virtual void startNewGame(uint length) {
            this->length=length;
        };
        virtual void learn(string results) {
            // TODO 
        };
};



}

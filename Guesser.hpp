#pragma once
#include <iostream>
#include <stdlib.h>
using std::string;

namespace bullpgia {


class Guesser{

public:
    int length;

	virtual string guess() = 0;
    virtual void startNewGame(uint length) {};
    virtual void learn(string length) {};

};



}

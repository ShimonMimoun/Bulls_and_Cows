#pragma once
#include <iostream>
#include <stdlib.h>
#include <cstdint>


namespace bullpgia {


class Guesser{

public:

    int length;
	virtual string guess(int length) = 0;

    
};



}

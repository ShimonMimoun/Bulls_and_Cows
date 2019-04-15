#pragma once
#include <iostream>
#include "Chooser.hpp"
using std::string;
/**
 * ConstantChooser is a chooser that always chooses the same string. 
 */
class SmartGuesser: public bullpgia::Guesser {

		string guess() override;
};

#include "Receiver.h"

Receiver::Receiver():
changeMe("")
{

}

void Receiver::action()
{
	std::cout << "'action executed\n'";
	lastState = changeMe;
	changeMe += "action done\n";
	
}

void Receiver::unAction()
{
	std::cout << "unaction executed\n";
	changeMe = lastState;
}

void Receiver::printHello()
{
	//std::cout << "Hello\n";
	lastState = changeMe;
	changeMe += "Hello\n";
}

void Receiver::unPrintHello()
{
	std::cout << "undid Hello, and no, you may not have it back\n";
	changeMe = lastState;
}

void Receiver::print()
{
	if (changeMe == "")
		std::cout << "nothing to print\n";
	else
		std::cout << changeMe << "\n";
}

Receiver::~Receiver()
{

}

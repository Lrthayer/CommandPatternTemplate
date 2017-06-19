#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>

class Receiver
{
	public:
		Receiver();
		void action();
		void unAction();
		void printHello();
		void unPrintHello();
		void print();
		~Receiver();

	private:
		std::string changeMe;
		std::string lastState;
};

#endif

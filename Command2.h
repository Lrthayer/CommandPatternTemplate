#ifndef COMMAND2_H
#define COMMAND2_H

#include "AbstractCommand.h"
#include "Receiver.h"

#include<iostream>

class Command2 : public AbstractCommand
{
	public:
		Command2(Receiver *r = 0);
		void exec();
		void unExec();
		~Command2();
	private:
		std::string _state;
		Receiver *rec;
};

#endif

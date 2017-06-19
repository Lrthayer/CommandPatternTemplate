#ifndef COMMAND_H
#define COMMAND_H

#include "AbstractCommand.h"
#include "Receiver.h"

#include<iostream>

class Command : public AbstractCommand
{
	public:
		Command(Receiver *r = 0);
		void exec();
		void unExec();
		~Command();
	private:
		std::string _state;
		Receiver *rec;
};

#endif

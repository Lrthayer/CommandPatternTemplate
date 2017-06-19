#ifndef ABSTRACTCOMMAND_H
#define ABSTRACTCOMMAND_H

#include "Receiver.h"

class AbstractCommand
{
	public:
		AbstractCommand() {};
		virtual void exec() = 0;
		virtual void unExec() = 0;
		~AbstractCommand() {};
};

#endif

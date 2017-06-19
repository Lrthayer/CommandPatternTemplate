#ifndef INVOKER_H
#define INVOKER_H

#include "AbstractCommand.h"

#include <vector>

class Invoker
{
	public:
		Invoker() {};
		void storeCommand(AbstractCommand*);
		void invoke();
		void undo();
		void redo();
		~Invoker() {};

	private:
		AbstractCommand* currentCommand_;
		std::vector<AbstractCommand*> commandQueue;
		std::vector<AbstractCommand*> commandHistory;
		std::vector<AbstractCommand*> redoCommandHistory;
};

#endif

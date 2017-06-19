#include "Invoker.h"

void Invoker::storeCommand(AbstractCommand *command)
{
	commandQueue.push_back(command);
}

void Invoker::invoke()
{
	AbstractCommand *tmp;
	tmp = commandQueue.front();
	tmp->exec();
	commandHistory.push_back(tmp);
	commandQueue.erase(commandQueue.begin());
}

void Invoker::undo()
{
	if (commandHistory.size() > 0)
	{
		AbstractCommand *tmp;
		tmp = commandHistory.back();
		commandHistory.pop_back();
		tmp->unExec();

		redoCommandHistory.push_back(tmp);
		//delete tmp;
	}
	else
		std::cout << "nothing to undo";
}

void Invoker::redo()
{

	if (redoCommandHistory.size() > 0)
	{
		AbstractCommand *tmp;
		tmp = redoCommandHistory.back();
		redoCommandHistory.pop_back();
		tmp->exec();
	}
	else
	{
		std::cout << "nothing to redo";
	}

}

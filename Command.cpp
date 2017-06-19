#include "Command.h"

Command::Command(Receiver *r) :
	rec(r)
{
}

void Command::exec()
{
	rec->action();
}


void Command::unExec()
{
	rec->unAction();
}

Command::~Command()
{
}

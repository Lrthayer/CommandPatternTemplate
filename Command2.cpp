#include "Command2.h"

Command2::Command2(Receiver *r) :
	rec(r)
{
}

void Command2::exec()
{
	rec->printHello();
}

void Command2::unExec()
{
	rec->unPrintHello();
}

Command2::~Command2()
{
}

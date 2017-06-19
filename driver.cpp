#include "Command.h"
#include "Command2.h"
#include "Invoker.h"

int main(int argc, char *argv[])
{
	Receiver *recTest = new Receiver();
	Command *comTest = new Command(recTest);
	Command2 *comTest2 = new Command2(recTest);
	Invoker *invTest = new Invoker();
	invTest->storeCommand(comTest);
	invTest->storeCommand(comTest2);

	invTest->invoke();
	invTest->undo();
	recTest->print();
	invTest->invoke();
	invTest->undo();
	recTest->print();
	invTest->redo();
	recTest->print();
}

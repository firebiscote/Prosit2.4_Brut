
#include "Receiver.h"
#include "Transmitter.h"

using namespace std;

int main() {
	Receiver* receiver1, * receiver2;
	receiver1 = new Receiver();
	receiver2 = new Receiver();
	Transmitter* transmitter;
	transmitter = new Transmitter();
	receiver1->connectTo(transmitter);
	cout << *receiver1 << "\n" << *receiver2;
	transmitter->sendMessage("m1");
	transmitter->sendMessage("m2");
	transmitter->sendMessage("m3");
	cout << *receiver1;
	receiver2->connectTo(transmitter);
	cout << *receiver2;
	transmitter->sendMessage("m4");
	cout << *receiver1 << "\n" << *receiver2;
}
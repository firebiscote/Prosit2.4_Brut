
#include "Receiver.h"
#include "Transmitter.h"

using namespace std;

int main() {
	Receiver* receiver1, * receiver2;
	receiver1 = new Receiver();
	receiver2 = new Receiver();
	Transmitter* transmitter, *transmitter2;
	transmitter = new Transmitter();
	transmitter2 = new Transmitter();
	receiver1->connectTo(transmitter);
	cout << "Receiver 1 : " << *receiver1 << "Receiver 2 : " << *receiver2 << "\n";
	transmitter->sendMessage("m1");
	transmitter->sendMessage("m2");
	transmitter->sendMessage("m3");
	cout << "Receiver 1 : " << *receiver1 << "Receiver 2 : " << *receiver2 << "\n";
	receiver2->connectTo(transmitter);
	cout << "Receiver 1 : " << *receiver1 << "Receiver 2 : " << *receiver2 << "\n";
	transmitter->sendMessage("m4");
	cout << "Receiver 1 : " << *receiver1 << "Receiver 2 : " << *receiver2 << "\n";
	receiver1->disconnectOf(transmitter);
	transmitter->sendMessage("m5");
	cout << "Receiver 1 : " << *receiver1 << "Receiver 2 : " << *receiver2 << "\n";
	receiver2->connectTo(transmitter2);
	transmitter2->sendMessage("m1");
	transmitter->sendMessage("m6");
	cout << "Receiver 2 : " << *receiver2;
}
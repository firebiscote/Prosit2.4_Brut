#include "Receiver.h"
#include "Transmitter.h"

using namespace std;

int main() {
	Receiver *receiver1, *receiver2, *receiver3;
	receiver1 = new Receiver();
	receiver2 = new Receiver();
	receiver3 = new Receiver();
	Transmitter *transmitter;
	transmitter = new Transmitter();
	receiver1->connectToTransmitter(transmitter);
	cout << *receiver1;
	transmitter->sendMessage("aaaa");
	cout << *receiver1;
	cout << *receiver2;
}
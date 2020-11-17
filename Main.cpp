#include "Receiver.h"
#include "Transmitter.h"

using namespace std;

int main() {
	Receiver *receiver1, *receiver2, *receiver3;
	receiver1 = new Receiver();
	receiver2 = new Receiver();
	receiver3 = new Receiver();
	Transmitter *transmitter;
	transmitter = new Transmitter("salut");
	receiver1->connectToTransmitter(transmitter);
	receiver2->connectToTransmitter(transmitter);
	receiver1->doAThing();
	receiver2->doAThing();
	transmitter->sendMessage();
	receiver1->doAThing();
	receiver2->doAThing();
}
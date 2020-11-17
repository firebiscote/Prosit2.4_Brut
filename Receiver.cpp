#include "Receiver.h"

using namespace std;

Receiver::Receiver() : _message("") {
}

void Receiver::connectToTransmitter(Transmitter* transmitter) {
	transmitter->set_method(&Receiver::set_message);
	transmitter->addReceiver(this);
}

void Receiver::set_message(string message) {
	_message = message;
}

ostream& operator<< (ostream& flux, Receiver const& receiver) {
	flux << receiver._message << endl;
	return flux;
}


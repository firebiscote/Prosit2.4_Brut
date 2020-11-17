#include "Receiver.h"

using namespace std;

Receiver::Receiver() : _message("") {
}

void Receiver::connectToTransmitter(Transmitter* transmitter) {
	transmitter->set_method(&Receiver::set_message);
	transmitter->addReceiver(this);
}

void Receiver::doAThing() {
	cout << _message << endl;
}

string Receiver::get_message() {
	return _message;
}

void Receiver::set_message(string message) {
	_message = message;
}


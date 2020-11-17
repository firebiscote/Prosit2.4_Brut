#include "Transmitter.h"
#include "Receiver.h"

using namespace std;

Transmitter::Transmitter() : _method(NULL) {
}

void Transmitter::sendMessage(string messageToSend) {
	for (int i = 0; i < _receivers.size(); i++) {
		((*_receivers[i]).set_message)(messageToSend);
	}
}

void Transmitter::addReceiver(Receiver *receiver) {
	_receivers.push_back(receiver);
}

void Transmitter::set_method(void (Receiver::* method)(string)) {
	_method = method;
}
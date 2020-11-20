#include "Transmitter.h"
#include "Receiver.h"

using namespace std;

Transmitter::Transmitter() : _method(NULL) {
}

void Transmitter::sendMessage(string messageToSend) {
	for (int i = 0; i < _receivers.size(); i++) {
		((*_receivers[i]).*_method)(messageToSend);
	}
	_transmission.push_back(messageToSend);
}

void Transmitter::addReceiver(Receiver* receiver) {
	_receivers.push_back(receiver);
}

void Transmitter::delReceiver(Receiver* receiver) {
	for (int i = 0; i < _receivers.size(); i++) {
		if (receiver == _receivers[i]) {
			_receivers.erase(_receivers.begin() + i);
			break;
		}
	}
}

void Transmitter::set_method(void (Receiver::* method)(string)) {
	_method = method;
}

vector<string>* Transmitter::get_transmission() {
	return &_transmission;
}
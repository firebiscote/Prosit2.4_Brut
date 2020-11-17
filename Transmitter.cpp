#include "Transmitter.h"

using namespace std;

Transmitter::Transmitter(string messageToSend) : _messageToSend(messageToSend) {
}

void Transmitter::sendMessage() {
	for (int i = 0; i < _receivers.size(); i++) {
		((*_receivers[i]).set_message)(_messageToSend);
	}
}

void Transmitter::addReceiver(Receiver *receiver) {
	_receivers.push_back(receiver);
}

string Transmitter::get_messageToSend() {
	return _messageToSend;
}

void Transmitter::set_MessageToSend(string messageToSend) {
	_messageToSend = messageToSend;
}

void Transmitter::set_method(void (Receiver::* method)(string)) {
	_method = method;
}
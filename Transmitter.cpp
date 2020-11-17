#include "Transmitter.h"

using namespace std;

Transmitter::Transmitter(string messageToSend) : _messageToSend(messageToSend) {
}

void Transmitter::sendMessage() {
	for (int i = 0; i < _receiver.size(); i++) {
		(Receiver::receiver[i])(_messageToSend);
	}
}

void Transmitter::addReceiver(void (Receiver::* method)(std::string)) {
	_receiver.push_back(method);
}

string Transmitter::get_messageToSend() {
	return _messageToSend;
}

void Transmitter::set_MessageToSend(string messageToSend) {
	_messageToSend = messageToSend;
}
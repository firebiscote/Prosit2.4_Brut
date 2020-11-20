#include "Receiver.h"

using namespace std;

Receiver::Receiver() {
}

void Receiver::connectTo(Transmitter* transmitter) {
	transmitter->set_method(&Receiver::set_message);
	transmitter->addReceiver(this);
	vector<string>* tmp = transmitter->get_transmission();
	for (int i = 0; i < tmp->size(); i++) {
		_message.push_back((*tmp)[i]);
	}
}

void Receiver::disconnectOf(Transmitter* transmitter) {
	transmitter->delReceiver(this);
}

void Receiver::set_message(string message) {
	_message.push_back(message);
}

ostream& operator<< (ostream& flux, Receiver const& receiver) {
	for (int i = 0; i < receiver._message.size(); i++) {
		flux << receiver._message[i] << "  ";
	}
	flux << endl;
	return flux;
}
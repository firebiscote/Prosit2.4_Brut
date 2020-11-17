#pragma once

#include "Receiver.h"
#include <vector>
#include <string>

class Transmitter {
public:
	Transmitter(std::string messageToSend);
	void sendMessage();
	void addReceiver(Receiver *receiver);
	std::string get_messageToSend();
	void set_MessageToSend(std::string messageToSend);
	void set_method(void (Receiver::*method)(std::string));
private:
	std::string _messageToSend;
	void (Receiver::*_method)(std::string);
	std::vector<Receiver*> _receivers;
};
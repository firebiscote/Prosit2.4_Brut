#pragma once

#include "Receiver.h"
#include <vector>

class Transmitter {
public:
	Transmitter(std::string messageToSend);
	void sendMessage();
	void addReceiver(void (Receiver::*method)(std::string));
	std::string get_messageToSend();
	void set_MessageToSend(std::string messageToSend);
private:
	std::string _messageToSend;
	std::vector<void (Receiver::*)(std::string)> _receiver;
};
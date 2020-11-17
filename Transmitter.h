#pragma once

#include <vector>
#include <string>

class Receiver;

class Transmitter {
public:
	Transmitter();
	void sendMessage(std::string message);
	void addReceiver(Receiver *receiver);
	void set_method(void (Receiver::*method)(std::string));
	std::vector<std::string>* get_transmission();
private:
	std::vector<std::string> _transmission;
	void (Receiver::*_method)(std::string);
	std::vector<Receiver*> _receivers;
};

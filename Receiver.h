#pragma once

#include "Transmitter.h"
#include <iostream>
#include <string>

class Receiver {
public:
	Receiver();
	void connectToTransmitter(Transmitter* Transmitter);
	void doAThing();
	std::string get_message();
	void set_message(std::string message);
private:
	std::string _message;
};
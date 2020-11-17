#pragma once

#include "Transmitter.h"
#include <iostream>
#include <string>

class Receiver {
public:
	Receiver();
	void connectToTransmitter(Transmitter* Transmitter);
	void set_message(std::string message);
private:
	std::string _message;
	friend std::ostream& operator<< (std::ostream& flux, Receiver const& receiver);
};

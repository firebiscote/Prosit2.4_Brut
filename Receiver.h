#pragma once

#include "Transmitter.h"
#include <iostream>
#include <string>

class Receiver {
public:
	Receiver();
	void connectTo(Transmitter* Transmitter);
	void disconnectOf(Transmitter* Transmission);
	void set_message(std::string message);
private:
	std::vector<std::string> _message;
	friend std::ostream& operator<< (std::ostream& flux, Receiver const& receiver);
};



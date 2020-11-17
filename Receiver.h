#pragma once

#include "Transmitter.h"
#include <iostream>
#include <string>

typedef struct {
	Transmitter* transmitter;
	std::vector<Receiver*> subscibers;
} Sub;

class Receiver {
public:
	Receiver();
	void connectTo(Transmitter* Transmitter);
	void set_message(std::string message);
private:
	std::string _message;
	friend std::ostream& operator<< (std::ostream& flux, Receiver const& receiver);
};


